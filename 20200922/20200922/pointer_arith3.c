#include <stdio.h>

int main()
{
	char buffer[8];
	double* pd;
	int* pi;

	pd = (double*)buffer; // char�� �����͸� double�� �����ͷ� ��ȯ, �迭�� �̸��� char�� �������̴�.
	*pd = 3.14;

	printf("%f\n", *pd);
	pi = (int*)buffer; // char�� �����͸� int�� �����ͷ� ��ȯ
	*pi = 123;
	*(pi + 1) = 456;

	printf("%d %d\n", *pi, *(pi + 1));

	return 0;
}