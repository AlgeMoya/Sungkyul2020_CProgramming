#include <stdio.h>

int main()
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++; // pi�� ����Ű�� ��ġ�� ���� �����Ѵ�. ��, i�� ���� �����Ѵ�.
	printf("i = %d, pi = %p\n", i, pi);

	printf("i = %d, pi = %p\n", i, pi);
	*pi++; // pi�� ����Ű�� ��ġ���� ���� ������ �Ŀ� pi�� �����Ѵ�. i�� �������� ������ �����ϴ� ���� pi�� �� i�� �ƴϴ�.
	printf("i = %d, pi = %p\n", i, pi);

	return 0;
}