#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* score;
	int i;
	score = (int*)malloc(100 * sizeof(int));

	if (score == NULL) // 반환값이 NULL인지 검사
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}

	for ( i = 0; i < 100; i++)
	{
		score[i] = 0;
	}

	free(score);

	return 0;
}