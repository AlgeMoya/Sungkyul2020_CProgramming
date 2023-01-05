#include <stdio.h>
void swapbyname(int x, int y);
void swapbypointer(int *px, int *py);

int main()
{
	int a = 100, b = 200;

	swapbypointer(&a, &b);

	return 0;
}

void swapbyname(int x, int y) // 값을 이용한 호출 시에는 변수에 들어있는 내용이 복사돼서 전달되기 때문에 원본 변수에 수정된 내용을 반영하지 못한다.
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}

void swapbypointer(int *px, int *py) // 포인터를 사용하면 원본 변수의 메모리 주소에 직접 액세스하기 때문에 수정된 내용이 반영된다.
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}