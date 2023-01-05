#include <stdio.h>

int main()
{
	int d, o, x;

	scanf("%d %o %x", &d, &o, &x); // 형식 지정자를 통해 10진수, 8진수, 16진수로 입력받아서 저장.
	printf("d = %d o = %d x = %d", d, o, x);

	return 0;
}