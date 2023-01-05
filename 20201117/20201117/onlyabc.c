#include <stdio.h>

int main()
{
	char s[80];

	printf("문자열을 입력하시오: ");
	scanf("%[abc]", s); // 문자열으로 입력받되 문자열의 원소 중 a, b, c만 입력받아 저장한다.

	printf("입력된 문자열 = %s\n", s);

	return 0;
}