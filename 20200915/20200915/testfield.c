#include <stdio.h>

int main()
{
	int s[][5] = {
		0, 1, 2, 3, 4,
		5, 6, 7, 8, 9
	}; // 2차원 배열 선언
	int i, j; // 2개의 인덱스 변수

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\n", s[i][j]);
	}

	return 0;
}