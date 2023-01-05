#include <stdio.h>

int main() {
	FILE *fp = NULL;

	fp = fopen("sample.txt", "w"); // w를 붙여서 쓰기 모드로 연다.

	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
	}
	else
	{
		printf("파일 열기 성공\n");
	}

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	
	fclose(fp);

	return 0;
}