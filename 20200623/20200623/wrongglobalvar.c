// 전역 변수를 사용하여 프로그램이 복잡해지는 경우
#include <stdio.h>
void f(void);

int i;

int main()
{
	for (i = 0; i < 5; i++)
	{
		f();
	}

	return 0;
}

void f(void)
{
	for (i = 0; i < 10; i++)
	{
		printf("#");
	}
}