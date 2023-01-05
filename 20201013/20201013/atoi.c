#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[] = "100";
	char s2[] = "12.93";
	char buffer[100];
	int i;
	double d, result;

	i = atoi(s1); // 문자열을 정수형으로 변환
	d = atof(s2); // 문자열을 실수형으로 변환

	result = i + d; // 정수형 + 실수형이므로 자동으로 실수형으로 형변환

	sprintf(buffer, "%f", result); // 실수형을 문자열로 변환
	printf("연산 결과는 %s입니다.\n", buffer);

	return 0;
}