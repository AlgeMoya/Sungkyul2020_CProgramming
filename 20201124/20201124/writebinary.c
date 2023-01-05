#include <stdio.h>
#define SIZE 5

int main()
{
	int buffer[SIZE] = { 10, 20, 30, 40, 50 };
	FILE* fp = NULL;

	fp = fopen("binary.bin", "wb");

	if (fp == NULL)
	{
		fprintf(stderr, "binary.txt 파일을 열 수 없습니다.");
		exit(1);
	}

	fwrite(buffer, sizeof(int), SIZE, fp); // buffer 배열에 있는 int값 5개를 fp에 연결된 파일에 저장한다.
	// fwrite(메모리 블록의 주소, 항목의 크기, 항목의 개수, 저장할 파일)

	fclose(fp);

	return 0;
}