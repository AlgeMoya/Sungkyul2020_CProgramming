#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
	int i;
	int grade[SIZE];

	for (i = 0; i < SIZE; i++)
	{
		grade[i] = rand() % 100;
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("grade[%d]=%d\n", i, grade[i]);
	}

	return 0;
}