#include <stdio.h>
int main()
{
	int i;
	char fruits[3][20];

	for (i = 0; i < 3; i++)
	{
		printf("���� �̸��� �Է��Ͻÿ�: ", fruits[i]); // fruits[i] == &fruits[i][0]
		scanf("%s", fruits[i]); // �տ� %�� ���̸� �ȵ�!
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d��° ����: %s\n", i, fruits[i]);
	}

	return 0;
}