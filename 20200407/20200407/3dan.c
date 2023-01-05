#include <stdio.h>

int main()
{
	printf("%d * %d = %d\n", 3, 1, 3*1);
	printf("3 * 2 = 6\n");
	printf("3 * 3 = 9\n");

	printf("\n");

	printf("사과\n");
	printf("오렌지\n");
	printf("포도\n");

	printf("\n");

	printf("2 + 5 = %d\n", 2 + 5);
	printf("2 - 3 = %d\n", 2 - 3);
	printf("2 * 3 = %d\n", 2 * 3);
	printf("2 / 3 = %d\n", 2 / 3);

	printf("\n");

	int a;
		for (a = 1; a<= 9; a++)
		{
			printf("%d * %d = %d\n", 3, a, 3 * a);
		}

	return 0;
}