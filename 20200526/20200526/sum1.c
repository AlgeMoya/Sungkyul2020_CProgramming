// while ���� �̿��� �հ� ���α׷�
#include <stdio.h>

int main()
{
	int i, n, sum; // ���� ����

	i = 0; // ���� �ʱ�ȭ
	sum = 0; // ���� �ʱ�ȭ

	while (i <= 5)
	{
		printf("���� �Է��Ͻÿ�: "); // �Է� �ȳ� �޽��� ���
		scanf("%d", &n); // ������ �Է�
		sum += n; // sum = sum + n;�� ����.
		i++; // i = i + 1�� ����.
	}

	printf("�հ�� %d�Դϴ�.\n", sum);

	return 0;
}