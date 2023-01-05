#include <stdio.h>

int main()
{
	int i = 10;
	int* p;

	p = &i;
	printf("i = %d\n", i);

	*p = 20; // 포인터를 통하여 변수의 값을 변경한다
	printf("i = %d\n", i);
	
	return 0;
}