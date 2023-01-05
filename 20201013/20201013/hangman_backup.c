#include <stdio.h>
int check(char s[], char a[], char ch);

int main()
{
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;

	while (1)
	{
		printf("문자열을 입력하시오: %s \n", answer);
		printf("글자를 추측하시오: ");
		ch = getchar();

		if (check(solution, answer, ch) == 1) // 문제를 맟추었다면 check에서 1을 반환한다
		{
			break;
		}
		fflush(stdin); // 키보드 버퍼에 남아있는 문자(ex. 엔터)를 제거한다.
	}

	return 0;
}

int check(char s[], char a[], char ch) // solution, answer, ch
{
	int i;

	for (i = 0; s[i] != NULL; i++) // \0, 문자열의 끝을 만날 때까지
	{
		if (s[i] == ch) // solution의 i번째 문자가 입력받은 문자와 같다면
		{
			a[i] = ch; // a의 i번째 문자를 입력받은 문자로 바꾼다
		}
	}
	if (strcmp(s, a) == 0) // 두 개의 문자열이 서로 일치하는지, 즉 정답과 일치하는지를 검사
	{
		return 1; // 일치하면 1을 반환
	}
	else
	{
		return 0; // 불일치하면 0을 반환
	}
}