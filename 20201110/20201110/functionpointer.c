// 함수 포인터
#include <stdio.h>

// 함수 원형 정의
int add(int, int);
int sub(int, int);

int main()
{
	int result;
	int (*pf)(int, int); // 함수 포인터 정의

	pf = add; // 함수 포인터에 함수 add()의 주소 대입
	result = pf(10, 20); // 함수 포인터를 통한 함수 add() 호출
	printf("10 + 20은 %d\n", result);

	pf = sub; // 함수 포인터에 함수 sub()의 주소 대입
	result = pf(10, 20); // 함수 포인터를 통한 함수 sub() 호출
	printf("10 - 20은 %d\n", result); // 이렇게 함수 포인터를 사용하면 서로 다른 함수를 동일한 함수명으로 호출하는 것처럼 사용할 수 있다.

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}