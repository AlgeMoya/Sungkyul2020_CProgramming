#include <stdio.h>

int get_integer(void)
{
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &value);
	return value;
}

int add(int x, int y)
{
	return x + y;
}

int main()
{
	int x = get_integer();
	int y = get_integer();
	
	int sum = add(x, y);
	printf("�� ���� ���� %d�Դϴ�. \n", sum);
	printf("20200808 ������\n");

	return 0;
	// ���� �� ���� ���� �ڵ�
}