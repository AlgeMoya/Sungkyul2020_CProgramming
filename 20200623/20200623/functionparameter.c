#include <stdio.h>

int inc(int counter);

int main()
{
	int i;

	i = 10;

	printf("함수 호출전 i = %d\n", i);
	
	inc(i);

	printf("함수 호출전 i = %d\n", i);

	return 0;
}

int inc(int counter)
{
	counter++;
	return counter;
}