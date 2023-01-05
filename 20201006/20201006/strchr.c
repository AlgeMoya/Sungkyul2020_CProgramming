#include <string.h>
#include <stdio.h>

int main()
{
	char s[] = "language";
	char c = 'g';
	char* p;
	int loc;

	p = strchr(s, c); // 전자의 문자열에서 후자의 문자의 위치를 찾아주는 함수. strchr에서 반환한 주소를 포인터 p에 저장한다. strchr()에서 발견하지 못했다면 NULL을 반환해준다.
	loc = (int)(p - s); // 포인터의 위치(ex. 103) - 문자열의 위치(ex. 100)을 계산하면 문자열의 몇 번째 자리에 strchr에서 찾은 문자가 들어있는 지를 알 수 있다.
	// char형이기 때문에 일반적인 수학식과 동일한 1 단위로 계산할 수 있다. 우선 같은 char끼리 계산한 다음 int로 형변환해서 저장한다.


	if (p != NULL) // strchr()가 정상적으로 작동했다면 loc에는 어떠한 정수가 저장되었을 것이고 아니라면 NULL이 저장되었을 것이다.
	{
		printf("첫번째 %c가 %d에서 발견되었음\n", c, loc);
	}
	else
	{
		printf("%c가 발견되지 않았음\n", c);
	}

	return 0;
}