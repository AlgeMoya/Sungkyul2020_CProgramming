// 구구단출력프로그램
#include <stdio.h>

int main()
{
	int i = 1;

	printf("구구단 3단\n");

	while (i < 10)
	{
		printf("%d * %d = %d \n", 3, i, 3 * i);
		i++;
	}

	return 0;
}