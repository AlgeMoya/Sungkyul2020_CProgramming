#include <stdio.h>

static void f1()
{
	printf("f1()이 호출되었습니다.\n");
}

void f2()
{	
	f1();
	printf("f2()이 호출되었습니다.\n");
}

int fib(int n)
{
	if (n == 0)
	{
		return 0;
	} 
	if (n == 1)
	{
		return 1;
	}
	return (fib(n - 1) + fib(n - 2));
}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		printf("원판 1을 %c에서 %c으로 옮긴다.\n", from, to);
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
		hanoi_tower(n - 1, tmp, to, from);
	}
}