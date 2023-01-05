// 소문자를 대문자로 변경한다.
#include <stdio.h>

int main()
{
	char letter;

	while (1)
	{
		printf("소문자를 입력하시오: ");
		scanf(" %c", &letter);  // %c 앞의 띄어쓰기를 없애고 다시 만들어보면서 차이를 확인해보자.

		if (letter == 'Q')
			break;
		if (letter < 'a' || letter > 'z')
			continue;

		letter -= 32;
		printf("변환된 대문자는 %c입니다.\n", letter);
	}

	printf("20200808 강석규\n");
	return 0;
}