#include <stdio.h>

int main()
{
	int grade[5] = { 31, 63 };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]);
	}

	return 0;
}