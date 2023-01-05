#include <stdio.h>
unsigned random_i(void);
double random_f(void);

int fib(int n);

void hanoi_tower(int n, char from, char tmp, char to);

extern unsigned call_count; // 외부 참조 변수

// extern void f1();
extern void f2();

int main()
{
	register int i; // 레지스터 변수
	
	for (i = 0; i < 10; i++)
	{
		printf("%d ", random_i());
	}

	printf("\n");

	for (i = 0; i < 10; i++)
	{
		printf("%f ", random_f());
	}

	printf("\n\n");

	printf("n함수가 호출된 횟수 = %d \n", call_count); 

	f2();

	printf("\n");

	hanoi_tower(4, 'A', 'B', 'C');
	
	return 0;
}