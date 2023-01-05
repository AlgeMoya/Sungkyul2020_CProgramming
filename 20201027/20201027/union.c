#include <stdio.h>

union example
{
	int i; // 같은 메모리 공간 공유
	char c; // 같은 메모리 공간 공유
};

int main()
{
	union example v;

	v.c = 'A';
	printf("v.c = %c v.i = %i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c = %c v.i = %i\n", v.c, v.i);
}