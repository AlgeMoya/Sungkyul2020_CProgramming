#include <stdio.h>

int main()
{
	int i, sum;

	sum = 0;
	
	for (i = 1; i <= 10; i++)
	{
		sum += i; // sum = sum + i; �� ����
	}

	printf("1���� 10������ ������ �� = %d\n", sum);

	return 0;
}