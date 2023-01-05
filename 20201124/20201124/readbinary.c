#include <stdio.h>
#define SIZE 5

int main()
{
	int i, buffer[SIZE];
	FILE* fp = NULL;

	fp = fopen("binary.bin", "rb");

	if (fp == NULL)
	{
		fprintf(stderr, "binary.txt 파일을 열 수 없습니다.");
		exit(1);
	}

	fread(buffer, sizeof(int), SIZE, fp); // buffer 배열에 있는 int값 5개를 fp에 연결된 파일에 저장한다.
	// fread(메모리 블록의 주소, 항목의 크기, 항목의 개수, 저장할 파일)

	for ( i = 0; i < SIZE; i++)
	{
		printf("%d", buffer[i]);
	}

	fclose(fp);

	return 0;
}