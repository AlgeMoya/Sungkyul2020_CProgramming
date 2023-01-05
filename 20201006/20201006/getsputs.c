#include <stdio.h>

int main()
{
	char name[100]; // 99자까지 받아 저장할 수 있다. 99자에는 문자열의 끝을 나타내는 \0 NULL 문자가 포함된다.
	char address[100];

	printf("이름을 입력하시오: ");
	gets(name); // 한 단어 이상을 입력받을 때에 사용한다

	printf("현재 거주하는 주소를 입력하시오: ");
	gets(address); // \n이 입력될 때까지 입력을 받으며, 마지막에 들어온 \n은 문자열의 끝을 나타내는 \0으로 변환된다.

	puts(name); // 마지막에 있는 \0은 \n으로 변환되어 강제개행으로 끝낸다.
	puts(address);

	return 0;
}