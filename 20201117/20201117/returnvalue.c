#include <stdio.h>

int main()
{
	int x, y, z;

	if (scanf("%d%d%d", &x, &y, &z) == 3) // scanf는 형식 지정자와 실제 입력된 값의 유형이 올바르게 일치한다면 입력받은 인수의 수를 반환한다. 3개의 정수를 받았으면 int형 3을 반환한다.
		printf("정수들의 합은 %d\n", x + y + z);
	else
		printf("입력값이 올바르지 않습니다.\n");

	return 0;
}