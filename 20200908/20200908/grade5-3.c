#include <stdio.h>

int main()
{
	int grade[5]; // 배열을 초기화하거나 값을 입력해주지 않으면
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]); // 입력하지도 않았던 무의미한 쓰레기 값이 출력된다.
	}

	return 0;
}