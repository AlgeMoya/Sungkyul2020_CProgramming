#include <stdio.h>

int main()
{
	int halflife;
	double initial, current;
	int years = 0;

	printf("�ݰ��⸦ �Է��Ͻÿ�(��): ");
	scanf("%d", &halflife);

	initial = 100.0;
	current = initial;

	while (current > initial/10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d�� �Ŀ� ���� �� = %f\n", years, current);
	}

	printf("1/10 ���Ϸ� �Ǳ���� �ɸ� �ð� = %d��\n", years);

	return 0;
}