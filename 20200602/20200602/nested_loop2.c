// ��ø for���� �̿��Ͽ� *  ��ȣ�� �簢�� ������� ����ϴ� ���α׷�
#include <stdio.h>

int main()
{
	int x, y;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < y; x++)
		{
			printf("*");
		}
		printf("\n"); // ���� �ݺ����� ����� ������ ����
	}

	return 0;
}