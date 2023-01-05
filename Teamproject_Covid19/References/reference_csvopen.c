#define _CRT_SECURE_NO_WARNINGS // SDL 경고나 오류를 막기 위해!
#include <stdio.h> // printf, fopen_s, fgets, fclose 함수를 사용하기 위해!

// ap_src_str 문자열에서 a_delimiter 또는 NULL 문자가 나올때까지 ap_buffer 메모리에
// 문자열을 복사한다. 예를들어, ap_src_str에 "abc,def"라고 들어있고 a_delimiter에
// ','가 전달되면 ap_buffer에는 "abc"문자열이 저장된다.
// 그리고 이 함수는 자신이 탐색을 완료한 위치의 주소를 반환한다. 위 예시에 적용하면
// "abc,def" 문자열의 ','문자가 위치한 주소를 반환한다.
char* GetNextString(char* ap_src_str, char a_delimiter, char* ap_buffer)
{
	// NULL 문자 또는 a_delimiter 문자가 나올때까지 반복하면서 
	// ap_src_str이 가리키는 문자를 ap_buffer가 가리키는 메모리에 복사한다.
	while (*ap_src_str && *ap_src_str != a_delimiter) *ap_buffer++ = *ap_src_str++;

	// 마지막 위치에 있는 문자가 줄바꿈 문자이면 줄바꿈 문자 대신 NULL 문자를 추가한다.
	// 줄바꿈 문자가 아니라면 문자열의 끝에 NULL 문자를 추가한다.
	if (*(ap_buffer - 1) == '\n') *(ap_buffer - 1) = 0;
	else *ap_buffer = 0;

	// ap_src_str 포인터가 가리키는 위치는 문자열 분리에 사용된 a_delimiter 문자의
	// 위치이거나 NULL 문자의 위치입니다. 만약 a_delimiter 문자 위치를 가리킨다면
	// 다음 문자는 ',' 다음 위치에서 진행될 것이기 때문에 건너띈다.
	if (*ap_src_str == a_delimiter) ap_src_str++;

	// 탐색을 완료한 위치의 주소를 반환한다.
	return ap_src_str;
}

int main()
{
	FILE *p_file = NULL; // 파일을 열어서 사용할 파일 포인터!

	// 파일에서 한 줄의 정보를 읽어서 저장할 변수와
	// 쉼표를 기준으로 분리한 문자열을 저장할 변수
	char one_line_string[128], str[32], *p_pos;

	// 타이틀을 출력하기 위해 사용할 형식이 항목마다 달라서 배열을 사용해서 테이블 형식으로 구성해서 사용합니다.
	const char* p_title_format_table[5] = {
		"    %s    ", "   %s     ", " %s", "  %s ", "  %s \n"
	};

	const char* p_data_format_table[5] = {
		"  %s", "%10s", "      %3s", "    %3s", "    %3s\n"
	};

	// fopen_s 함수를 사용하여 'data.csv' 파일을 텍스트 형식의 읽기 모드로 연다!
	// 이 함수는 파일 열기에 성공했다면 0을 반환한다.
	fopen_s(&p_file, "data.csv", "rt");

	if (0 == fopen_s(&p_file, "data.csv", "rt"))
	{
		// p_file에서 한 줄의 정보를 최대 127바이트까지 읽어온다. (첫 줄의 정보가 타이틀 정보!!)
		if (fgets(one_line_string, 128, p_file) != NULL)
		{
			printf("----------------------------------------------------\n");

			// 읽어들인 한 줄의 데이터에서 쉼표를 기준으로 문자열을 분리하기 위해 작업 시작 위치를 배열의 시작 주소로 설정한다.
			p_pos = one_line_string;

			// 분리 시점에서 NULL 문자가 나올 때까지 작업을 반복한다.
			for (int i = 0; *p_pos; i++)
			{
				// 쉼표를 기준으로 문자열을 분리해서 str에 저장한다.
				p_pos = GetNextString(p_pos, ',', str);
				
				// str에 저장되어 있는 분리된 문자열을 p_title_format_table에 넣어서 출력한다.
				printf(p_title_format_table[i], str);
			}
			printf("----------------------------------------------------\n");
		}

		// 파일의 끝까지 학생별 성적 정보를 읽어들인다.
		while (NULL != fgets(one_line_string, 128, p_file))
		{
			// 읽어들인 한 줄의 데이터에서 쉼표를 기준으로 문자열을 분리하기 위해 작업 시작 위치를 배열의 시작 주소로 설정한다.
			p_pos = one_line_string;

			// 분리 시점에서 NULL 문자가 나올 때까지 작업을 반복한다.
			for (int i = 0; *p_pos; i++)
			{
				// 쉼표를 기준으로 문자열을 분리해서 str에 저장한다.
				p_pos = GetNextString(p_pos, ',', str);

				// str에 저장되어 있는 분리된 문자열을 p_data_format_table에 넣어서 출력한다.
				printf(p_data_format_table[i], str);
			}

		}

		printf("----------------------------------------------------\n");
		fclose(p_file); // 'data.csv' 파일을 닫는다.
	}

	return 0;
}