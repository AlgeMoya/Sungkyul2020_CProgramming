#include <stdio.h>

int main()
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;

	sscanf(s1, "%d", &value); // 문자열에서 값을 추출한다.
	printf("%d\n", value);
	sprintf(s2, "%d", value); // 문자열에 값을 출력한다.
	printf("%d\n", s2);

	return 0;
}