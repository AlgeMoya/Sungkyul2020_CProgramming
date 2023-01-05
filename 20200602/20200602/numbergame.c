#include <stdio.h>
#include <stdlib.h>

int main()
{
	int answer = rand()%100; // 정답을 무작위 난수로 생성
	int guess;
	int tries = 0;

	do
	{
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;
		if (guess > answer) // 사용자가 입력한 정수가 정답보다 높으면
			printf("제시한 정수가 높습니다.\n");
		if (guess < answer) // 사용자가 입력한 정수가 정답보다 낮으면
			printf("제시한 정수가 낮습니다.\n");
	} while (guess != answer);

	printf("축하합니다. 시도횟수 = %d\n", tries);

	return 0;
}