/* 부동 소수점 자료형의 크기 계산 */
#include <stdio.h>

int main()
{
	float x = 1.2345678901234567489;
	double y = 1.234567890123456789;

	printf("float의 크기=%d\n", sizeof(float));
	printf("double의 크기=%d\n", sizeof(double));
	printf("long double의 크기=%d\n", sizeof(long double));

	printf("x = %30.25f\n", x);
	printf("y = %30.25f\n", y);

	return 0;
}