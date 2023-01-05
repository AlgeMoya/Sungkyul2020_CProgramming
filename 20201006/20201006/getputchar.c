// getchar()의 사용
#include <stdio.h>

int main()
{
	int ch; // 정수형에 주의
	
	while ((ch = getchar()) != EOF) // End of File을 나타내는 문자, EOF는 정수형이다.
	{
		putchar(ch);
	}

	return 0;
}