// ������ ������ ����ϴ� �Լ� ����
#include <stdio.h>

int square(int n); // �Լ�����, �Լ��� �����
// ���� ������ �Լ��� ���¸� ����

int main(void)
{
	int result;
	result = square(5);
	printf("%d", result);
}

int square(int n)
{
	return (n * n);
} 