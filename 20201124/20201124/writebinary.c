#include <stdio.h>
#define SIZE 5

int main()
{
	int buffer[SIZE] = { 10, 20, 30, 40, 50 };
	FILE* fp = NULL;

	fp = fopen("binary.bin", "wb");

	if (fp == NULL)
	{
		fprintf(stderr, "binary.txt ������ �� �� �����ϴ�.");
		exit(1);
	}

	fwrite(buffer, sizeof(int), SIZE, fp); // buffer �迭�� �ִ� int�� 5���� fp�� ����� ���Ͽ� �����Ѵ�.
	// fwrite(�޸� ����� �ּ�, �׸��� ũ��, �׸��� ����, ������ ����)

	fclose(fp);

	return 0;
}