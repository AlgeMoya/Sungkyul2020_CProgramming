// �ݺ��� �̿��� ���丮�� ���ϱ�
#include <stdio.h>

int main()
{
	long fact = 1;
	int i = 1, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	while (i <= n)
	{
		fact *= i;
		i++;
	}

	printf("%d!�� %d�Դϴ�.\n", n, fact);

	return 0;
}