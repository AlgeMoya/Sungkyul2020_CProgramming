#include <stdio.h>

int main()
{
	int i = 10;
	int* p;

	p = &i;
	printf("i = %d\n", i);

	*p = 20; // �����͸� ���Ͽ� ������ ���� �����Ѵ�
	printf("i = %d\n", i);
	
	return 0;
}