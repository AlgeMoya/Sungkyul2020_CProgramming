#include <stdio.h>
void swapbyname(int x, int y);
void swapbypointer(int *px, int *py);

int main()
{
	int a = 100, b = 200;

	swapbypointer(&a, &b);

	return 0;
}

void swapbyname(int x, int y) // ���� �̿��� ȣ�� �ÿ��� ������ ����ִ� ������ ����ż� ���޵Ǳ� ������ ���� ������ ������ ������ �ݿ����� ���Ѵ�.
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}

void swapbypointer(int *px, int *py) // �����͸� ����ϸ� ���� ������ �޸� �ּҿ� ���� �׼����ϱ� ������ ������ ������ �ݿ��ȴ�.
{
	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;
}