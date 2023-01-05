#include <stdio.h>

int main()
{
	int a, b, c, d;
	
	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &a, &b);

	c = a / b;
	d = a % b;

	printf("몫: %d  나머지: %d", c, d);

	return 0;
}