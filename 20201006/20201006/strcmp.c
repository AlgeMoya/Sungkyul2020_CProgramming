// strcmp() 함수
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[80]; // 첫번째 단어를 저장할 문자배열
	char s2[80]; // 두번째 단어를 저장할 문자배열
	int result;

	printf("첫번째 단어를 입력하시오: ");
	scanf("%s", &s1);
	printf("두번째 단어를 입력하시오: ");
	scanf("%s", &s2);

	result = strcmp(s1, s2);

	if (result < 0) // strcmp()는 전자가 후자보다 앞이라면 음수를 반환한다
	{
		printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);
	}
	else if (result == 0) // strcmp()는 전자가 후자와 같다면 0을 반환한다
	{
		printf("%s가 %s와 같습니다.\n", s1, s2);
	}
	else // strcmp()는 전자가 후자보다 뒤라면 양수를 반환한다
	{
		printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);
	}

	return 0;
}