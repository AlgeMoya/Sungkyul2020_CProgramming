#include <stdio.h>
#define SIZE 10

int main()
{
	int list[SIZE] = { 3, 2, 9, 7, 1, 4, 8, 0, 6, 5 };
	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++)
	{
		least = i;
		for (j = i + 1; j < SIZE; j++) // 내부 for 루프로서 (i + 1)번째 원소부터 배열의 마지막 원소 중에서 최소값을 찾는다. 현재의 최소값과 비교하여 더 작은 정수가 발견되면 그 정수가 들어 있는 인덱스를 least에 저장한다.
		{
			if (list[j] < list[least])
				least = j;
		}

		temp = list[i]; // list[i]와 list[least]를 서로 교환
		list[i] = list[least];
		list[least] = temp;
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("%d", list[i]);
	}

	printf("\n");

	return 0;
}