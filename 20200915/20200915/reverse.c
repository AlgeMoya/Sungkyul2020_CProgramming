#include <stdio.h>
#define SIZE 5

int main()
{
	int data[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) // 정수를 입력받는 루프
	{
		printf("정수를 입력하시오: ");
		scanf("%d", &data[i]);
	}

	for (i = SIZE - 1; i >= 0; i--)
	{
		printf("%d\n", data[i]);
	}

	return 0;
}