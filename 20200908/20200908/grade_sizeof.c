#include <stdio.h>

int main()
{
	int grade[] = { 1, 2, 3, 4, 5, 6 };
	int i, size;

	size = sizeof(grade) / sizeof(grade[0]); // �迭�� ��ü ũ�⸦ �� ������ ũ��� ������ �迭�� ���� ���� ���Ѵ�

	for (i = 0; i < size; i++)
	{
		printf("%d\n", grade[i]);
	}

	return 0;
}