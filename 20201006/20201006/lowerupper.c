#include <stdio.h>
#include <ctype.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF) // 입력받은 문자가 End of File이 아니라면 계속 반복. EOF를 키보드에서 입력하려면 ^Z. getchar()는 문자열도 입력받을 수 있다.
	{
		if (islower(c))
		{
			c = toupper(c);
		}
		putchar(c);
	}

	return 0;
}