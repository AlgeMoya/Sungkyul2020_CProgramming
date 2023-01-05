#include <stdio.h>

int main() {
	FILE* fp = NULL;
	
	int c;

	fp = fopen("sample.txt", "r"); // r을 붙여서 읽기 모드로 연다.

	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
	}
	else
	{
		printf("파일 열기 성공\n");
	}

	while (c = fgetc(fp) != EOF) // fgetc() 함수는 하나의 값을 읽어오면 자동으로 가리키는 위치가 다음 값으로 이동한다. 따라서 ++ 등의 처리가 필요 없다.
	{
		putchar(c);
	}

	fclose(fp);

	return 0;
}