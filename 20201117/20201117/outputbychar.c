#include <stdio.h>

int main() {
	FILE* fp = NULL;
	
	int c;

	fp = fopen("sample.txt", "r"); // r�� �ٿ��� �б� ���� ����.

	if (fp == NULL)
	{
		printf("���� ���� ����\n");
	}
	else
	{
		printf("���� ���� ����\n");
	}

	while (c = fgetc(fp) != EOF) // fgetc() �Լ��� �ϳ��� ���� �о���� �ڵ����� ����Ű�� ��ġ�� ���� ������ �̵��Ѵ�. ���� ++ ���� ó���� �ʿ� ����.
	{
		putchar(c);
	}

	fclose(fp);

	return 0;
}