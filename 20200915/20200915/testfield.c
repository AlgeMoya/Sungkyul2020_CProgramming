#include <stdio.h>

int main()
{
	int s[][5] = {
		0, 1, 2, 3, 4,
		5, 6, 7, 8, 9
	}; // 2���� �迭 ����
	int i, j; // 2���� �ε��� ����

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\n", s[i][j]);
	}

	return 0;
}