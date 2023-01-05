// �Լ� ������
#include <stdio.h>

// �Լ� ���� ����
int add(int, int);
int sub(int, int);

int main()
{
	int result;
	int (*pf)(int, int); // �Լ� ������ ����

	pf = add; // �Լ� �����Ϳ� �Լ� add()�� �ּ� ����
	result = pf(10, 20); // �Լ� �����͸� ���� �Լ� add() ȣ��
	printf("10 + 20�� %d\n", result);

	pf = sub; // �Լ� �����Ϳ� �Լ� sub()�� �ּ� ����
	result = pf(10, 20); // �Լ� �����͸� ���� �Լ� sub() ȣ��
	printf("10 - 20�� %d\n", result); // �̷��� �Լ� �����͸� ����ϸ� ���� �ٸ� �Լ��� ������ �Լ������� ȣ���ϴ� ��ó�� ����� �� �ִ�.

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}