// �ŵ����� ���� ���ϴ� ����
#include <stdio.h>

int get_integer(void);
int power(int x, int y);

int main()
{
	int a, b;
	a = get_integer();
	b = get_integer();
	
	printf("%d�� %d���� %d�Դϴ�.", a, b, power(a, b));

	return 0;
}

// ����ڷκ��� ���� �Է¹޾Ƽ� ��ȯ
int get_integer(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	return n;
}

// �ŵ����� ���� ����Ͽ��� ��ȯ
int power(int x, int y)
{
	int i;
	long result = 1; // 1�� �ʱ�ȭ

	for (i = 0; i < y; i++)
	{
		result *= x; // result = result * x
	}

	return result;
}