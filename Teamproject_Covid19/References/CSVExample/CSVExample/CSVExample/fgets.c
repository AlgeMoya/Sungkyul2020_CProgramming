#define _CRT_SECURE_NO_WARNINGS // SDL 경고나 오류를 막기 위해!
#include <stdio.h>

int main()
{
	FILE* p_file;
	char str[64];

	// 파일 열기를 시도한다!
	p_file = fopen("tips.txt", "rt");

	if (p_file != NULL)
	{
		// 파일 열기에 성공한 경우!
		if (fgets(str, 64, p_file) != NULL)
		{
			// 파일 읽기에 성공한 경우, 해당 문자열을 화면에 출력한다!
			printf("%s", str);
		}
		else
		{
			// 파일에서 파일 읽기를 실패한 경우!
			printf("파일에서 문자열을 읽을 수 없습니다.\n");
		}

		fclose(p_file); // 파일을 다 사용했으면 파일을 닫는다.
	}

	return 0;
}