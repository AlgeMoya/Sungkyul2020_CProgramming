#include <stdio.h>

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int (*pa)[5]; // 배열 포인터 선언
	int i;

	pa = &a; // 배열 포인터의 배열의 시작 주소를 넘겨주면 배열처럼 사용할 수 있게 된다.
	for (i = 0; i < 5; i++)
	{
		printf("%d \n", (*pa)[i]); // 배열 포인터에는 반드시 괄호를 씌운다.
		// (*pa)[0] == a[0]
	}

	return 0;
}