#include <stdio.h>

int main()
{
	int id, pass;

	printf("아이디와 패스워드를 4개의 숫자로 입력하세요: \n");

	printf("id: ____\b\b\b\b");
	scanf("%d", &id);

	printf("pass: ____\b\b\b\b");
	scanf("%d", &pass);

	printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n\n", id, pass);

	char code = 65;

	printf("%d %d %d\n", code, code + 1, code + 2); // 65 66 67이 출력된다.
	printf("%c %c %c\n", code, code + 1, code + 2); // A B C가 출력된다.

	return 0;
}