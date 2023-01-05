#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void);

int main()
{
	int toss;
	int heads = 0;
	int tails = 0;

	srand((unsigned)time(NULL));

	for (toss = 0; toss < 100; toss++)
	{
		if (coin_toss() == 1)
		{
			heads++; // 앞면
		}
		else
		{
			tails++; // 뒷면
		}
	}

	printf("동전의 앞면: %d \n", heads);
	printf("동전의 뒷면: %d \n", tails);

	return 0;
}

int coin_toss(void)
{
	int i = rand() % 2;
	if (i == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}