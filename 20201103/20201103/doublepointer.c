// 이중 포인터 프로그램
#include <stdio.h>

int main()
{
	int i = 100;
	int *p = &i;
	int **q = &p;

	*p = 200;
	printf("i = %d, *p = %d, **q = %d \n", i, *p, **q);

	**q = 300;
	printf("i = %d, *p = %d, **q = %d \n", i, *p, **q);

	return 0;
}