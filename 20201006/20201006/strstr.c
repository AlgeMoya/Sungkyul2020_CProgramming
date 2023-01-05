#include <string.h> // 문자열 처리를 위한 헤더 파일
#include <stdio.h>

int main()
{
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joy";
	char* p;
	int loc;

	p = strstr(s, sub); // 전자의 문자열에서 후자의 문자열의 첫번째 위치를 찾아주는 함수. strstr에서 반환한 주소를 포인터 p에 저장한다. 발견하지 못했다면 NULL을 반환해준다.
	loc = (int)(p - s); // 포인터의 위치(ex. 103) - 문자열의 위치(ex. 100)을 계산하면 문자열의 몇 번째 자리에 strstr에서 찾은 문자열이 들어있는 지를 알 수 있다.
	// char형이기 때문에 일반적인 수학식과 동일한 1 단위로 계산할 수 있다. 우선 같은 char끼리 계산한 다음 int로 형변환해서 저장한다.


	if (p != NULL) // strstr()가 정상적으로 작동했다면 loc에는 어떠한 정수가 저장되었을 것이고 아니라면 NULL이 저장되었을 것이다.
	{
		printf("첫번째 %s가 %d에서 발견되었음\n", sub, loc);
	}
	else
	{
		printf("%s가 발견되지 않았음\n", sub);
	}

	return 0;
}