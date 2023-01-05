#include <stdio.h>
void sub(void);

int main()
{
	int i;
	for (i = 0; i < 3; i++)
	{
		sub();
	}

	return 0;
}

void sub(void)
{
	int auto_count = 0;
	static int static_count = 0; // static을 붙이면 지역 변수가 정적 변수가 된다.

	auto_count++;
	static_count++;
	printf("auto_count = %d\n", auto_count);
	printf("static_count = %d\n", static_count);
}