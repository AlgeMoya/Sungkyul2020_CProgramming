#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main()
{
	int i;

	srand((unsigned)timme(NULL));
	// 시드를 설정하는 가장 일반적인 방법은 현재의 시각을 시드로 사용하는 방법이다. 현재 시각은 실행할 때마다 달라지기 때문이다.

	for (i = 0; i < 6; i++)
	{
		printf("%d ", 1 + (rand() % MAX)); // 1부터 45까지
	}

	return 0;
}