/* ������� ����ϴ� ���α׷� */
#include <stdio.h>

int main()
{
	int salary; // ����
	int deposit; // �����

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &salary); // ����ڷκ��� ������ �Է¹޴´�.

	deposit = 10 * 12 * salary; // ���޿� 10 * 12�� ���Ͽ� 10�⵿���� ������� ����Ѵ�.

	printf("10�� ������ �����: %d\n", deposit); // ����� ����Ѵ�.

	return 0;
}