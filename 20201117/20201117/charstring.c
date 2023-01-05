#include <stdio.h>

int main()
{
	char c;
	char s[80], t[80];

	printf("스페이스로 분리된 문자열을 입력하시오: ");
	scanf("%s%c%s", s, &c, t); // 형식 지정자 영역에는 이스케이프 문자를 넣어서는 안된다. 

	printf("입력된 첫번째 문자열 = %s\n", s);
	printf("입력된 문자 = %c\n", c); // 스페이스로 문자열을 구분했다면 스페이스 또한 문자로 인식되므로 투명한 공백 문자를 출력한다.
	printf("입력된 두번째 문자열 = %s\n", t);

	return 0;
}