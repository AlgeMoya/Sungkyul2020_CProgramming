// while 문을 이용한 합계 프로그램
#include <stdio.h>

int main()
{
	int i, n, sum; // 변수 선언

	i = 0; // 변수 초기화
	sum = 0; // 변수 초기화

	while (i <= 5)
	{
		printf("값을 입력하시오: "); // 입력 안내 메시지 출력
		scanf("%d", &n); // 정수값 입력
		sum += n; // sum = sum + n;과 같다.
		i++; // i = i + 1과 같다.
	}

	printf("합계는 %d입니다.\n", sum);

	return 0;
}