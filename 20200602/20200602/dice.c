// ��ø for���� �̿��Ͽ� *  ��ȣ�� �簢�� ������� ����ϴ� ���α׷�
#include <stdio.h>

int main()
{
	int x, y, z;

	for (x= 1; x <= 6; x++)
	{
		for (y = 1; y <= 6 ; y++)
		{
			if (x + y == 6)
			{
				printf("(%d, %d), ", x, y);
			}
		}
	}
	printf("\n\n");

	for (x = 1; x <= 6; x++)
	{
		for (y = 1; y <= 6; y++)
		{
			for (z = 1; z <= 6; z++)
			{
				if (x + y + z == 10)
				{
					printf("(%d, %d, %d), ", x, y, z);
				}
			}
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}