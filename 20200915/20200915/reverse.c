#include <stdio.h>
#define SIZE 5

int main()
{
	int data[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) // ������ �Է¹޴� ����
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &data[i]);
	}

	for (i = SIZE - 1; i >= 0; i--)
	{
		printf("%d\n", data[i]);
	}

	return 0;
}