#include <stdio.h>
#define SIZE 5

int main()
{
	int i, buffer[SIZE];
	FILE* fp = NULL;

	fp = fopen("binary.bin", "rb");

	if (fp == NULL)
	{
		fprintf(stderr, "binary.txt ������ �� �� �����ϴ�.");
		exit(1);
	}

	fread(buffer, sizeof(int), SIZE, fp); // buffer �迭�� �ִ� int�� 5���� fp�� ����� ���Ͽ� �����Ѵ�.
	// fread(�޸� ����� �ּ�, �׸��� ũ��, �׸��� ����, ������ ����)

	for ( i = 0; i < SIZE; i++)
	{
		printf("%d", buffer[i]);
	}

	fclose(fp);

	return 0;
}