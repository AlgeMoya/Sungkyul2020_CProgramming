#include <stdio.h>

int main()
{
	FILE *fp = NULL;

	fp = fopen("sample.txt", "w");

	if (fp == NULL)
	{
		printf("���� ���� ����\n");
	}
	else
	{
		printf("���� ���� ����\n");
	}

	fclose(fp); // ������ �� �̻� ������� ���� ���� fclose()�� ����Ͽ� ������ �����ϰ� RAM���� �����Ѵ�.

	return 0;
}