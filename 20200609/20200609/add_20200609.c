#include <stdio.h>

int get_integer(void)
{	
	int a;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	
	return a;
}

int add(int x, int y)
{
	int result = x + y;
	printf("�� ���� ���� %d�Դϴ�.\n", result);

	return result;
}

int main()
{
	int x, y;
	x = get_integer();
	y = get_integer();
	add(x, y);
	printf("20200808 ������\n");

	return 0;
	// ������� ���� ���� § �ڵ�
}