#include <stdio.h>

int main()
{
	int i = 10;
	char c = 69;
	float f = 12.3;

	int* p;

	printf("i�� �ּ�: %u\n", &i); // ���� i�� �ּ� ���
	printf("c�� �ּ�: %u\n", &c); // ���� c�� �ּ� ���
	printf("f�� �ּ�: %u\n", &f); // ���� f�� �ּ� ���

	p = &i;

	return 0;
}