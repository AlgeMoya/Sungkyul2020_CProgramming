#include <stdio.h>
int counter;

void set_counter()
{
	counter = 20; // 직접 사용 가능
}

int main()
{
	printf("counter = %d\n", counter);
	set_counter();
	printf("counter = %d\n", counter);

	return 0;
}