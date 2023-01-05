#include <stdio.h>

int main()
{
	int x, y, z, biggest;

	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	biggest = (x > y) ? x : y;
	biggest = (biggest > z) ? biggest : z;

	printf("최대값: %d", biggest);

	return 0;
}