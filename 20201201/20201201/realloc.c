#include <stdio.h>
#include <stdlib.h>
#define INCREMENT 100 // 한 번에 증가시키는 크기
double* scores = NULL;

int add_score(double new_score)
{
	static int limit = 0; // 현재 동적 배열의 최대 크기
	static int count = 0; // 현재 동적 배열의 크기

	if (count < limit)
	{
		scores[count++] = new_score;
	}
	else
	{
		int new_limit = limit + INCREMENT;
		double* new_array = realloc(scores, new_limit * sizeof(double));

		if (new_array == NULL)
		{
			fprintf(strerr, "메모리 할당 오류\n");
		}
		else
		{
			scores = new_array;
			limit = new_limit;
			scores[count++] = new_score;
		}

		return count;
	}
}

int main()
{
	int i, size;
	double value, total = 0.0;

	size = 3;

	for ( i = 0; i < size; i++)
	{
		printf("성적: ");
		scanf("%lf", &value);
		add_score(value);
	}

	for ( i = 0; i < size; i++)
	{
		total += scores[i];
	}

	printf("평균: %f\n", total / size);

	free(scores);

	return 0;
}