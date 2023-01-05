#include <stdio.h>

int main()
{
	char buffer[8];
	double* pd;
	int* pi;

	pd = (double*)buffer; // char형 포인터를 double형 포인터로 변환, 배열의 이름은 char형 포인터이다.
	*pd = 3.14;

	printf("%f\n", *pd);
	pi = (int*)buffer; // char형 포인터를 int형 포인터로 변환
	*pi = 123;
	*(pi + 1) = 456;

	printf("%d %d\n", *pi, *(pi + 1));

	return 0;
}