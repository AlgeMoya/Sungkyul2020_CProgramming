// 문자열의 길이를 구하는 프로그램
#include <stdio.h>

int main()
{
	char str[30] = "C language is easy";
	int i = 0;

	while (str[i] != 0) // 맨 마지막의 NULL 문자를 만날 때까지
	{
		i++;
	}

	printf("문자열 \"%s\"의 길이는 %d입니다.\n", str, i);

	return 0;
}