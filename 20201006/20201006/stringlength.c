// ���ڿ��� ���̸� ���ϴ� ���α׷�
#include <stdio.h>

int main()
{
	char str[30] = "C language is easy";
	int i = 0;

	while (str[i] != 0) // �� �������� NULL ���ڸ� ���� ������
	{
		i++;
	}

	printf("���ڿ� \"%s\"�� ���̴� %d�Դϴ�.\n", str, i);

	return 0;
}