// �ݺ��� �̿��� ���������ϱ�
#include <stdio.h>

int main()
{
	int i, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	printf("====================\n");
	printf("  i    i�� ������\n");
	printf("====================\n");

	for (i = 1; i <= n; i++)
	{
		printf("%5d    %d\n", i, i * i * i);
	}

	return 0;
}