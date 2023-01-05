// while 문을 이용한 제곱값 출력 프로그램
#include <stdio.h>

int main()
{
	int i, n;

	for (i = 0; i < 21; i++)
		printf("=");
	printf("\n");
	
	printf("    n   n의 제곱 \n");
	
	for (i = 0; i < 21; i++)
		printf("=");
	printf("\n");

	n = 1;

	while (n <= 10)
	{
		printf("%5d  %5d\n", n, n * n);
		n++;
	}

	return 0;
}