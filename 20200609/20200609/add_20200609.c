#include <stdio.h>

int get_integer(void)
{	
	int a;
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	
	return a;
}

int add(int x, int y)
{
	int result = x + y;
	printf("두 수의 합은 %d입니다.\n", result);

	return result;
}

int main()
{
	int x, y;
	x = get_integer();
	y = get_integer();
	add(x, y);
	printf("20200808 강석규\n");

	return 0;
	// 결과값만 보고 직접 짠 코드
}