// 반복을 이용한 세제곱구하기
#include <stdio.h>

int main()
{
	int i, n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	printf("====================\n");
	printf("  i    i의 세제곱\n");
	printf("====================\n");

	for (i = 1; i <= n; i++)
	{
		printf("%5d    %d\n", i, i * i * i);
	}

	return 0;
}