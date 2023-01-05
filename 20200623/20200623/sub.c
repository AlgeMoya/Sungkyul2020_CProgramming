#include <stdio.h>

static void f1()
{
	printf("f1()�� ȣ��Ǿ����ϴ�.\n");
}

void f2()
{	
	f1();
	printf("f2()�� ȣ��Ǿ����ϴ�.\n");
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
		printf("���� 1�� %c���� %c���� �ű��.\n", from, to);
	}
	else
	{
		hanoi_tower(n - 1, from, to, tmp);
		printf("���� %d�� %c���� %c���� �ű��.\n", n, from, to);
		hanoi_tower(n - 1, tmp, to, from);
	}
}