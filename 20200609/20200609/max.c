// �� �� �߿��� ū ���� ã�� �Լ� ����
#include <stdio.h>

int get_max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int a, b;
	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);

	printf("�� �� �߿��� �� ū ���� %d�Դϴ�.\n", get_max(a, b));

	return 0;
}