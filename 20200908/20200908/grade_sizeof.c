#include <stdio.h>

int main()
{
	int grade[] = { 1, 2, 3, 4, 5, 6 };
	int i, size;

	size = sizeof(grade) / sizeof(grade[0]); // 배열의 전체 크기를 한 원소의 크기로 나눠서 배열의 원소 수를 구한다

	for (i = 0; i < size; i++)
	{
		printf("%d\n", grade[i]);
	}

	return 0;
}