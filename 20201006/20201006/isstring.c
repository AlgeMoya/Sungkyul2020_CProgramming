#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
	int c;

	while ((c = getch()) != 'z') // getch 함수는 입력받은 그대로의 문자를 저장한다.
	{
		printf("------------------------------\n");
		printf("isdigit(%c) = %d\n", c, isdigit(c)); // 숫자인지 검사. 참이면 16, 거짓이면 0을 반환. 이하동일
		printf("isalpha(%c) = %d\n", c, isalpha(c)); // 알파벳인지 검사
		printf("islower(%c) = %d\n", c, islower(c)); // 소문자인지 검사
		printf("ispunct(%c) = %d\n", c, ispunct(c)); // 구두점 문자인지 검사
		printf("isxdigit(%c) = %d\n", c, isxdigit(c)); // 16진수인지 검사
		printf("isprint(%c) = %d\n", c, isprint(c)); // 출력 가능한지 검사
		printf("------------------------------\n\n");
	}

	return 0;
}