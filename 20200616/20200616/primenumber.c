#include <stdio.h>

int is_prime(int); // �Լ������� �Լ� ���� Ȯ�ο����θ� ����ϱ� ������ ������ ��� ��ü���� ����� �Ǿ��ִٸ� ������ ����
int get_integer(void);

int main()
{
	int n, result;
	n = get_integer();
	result = is_prime(n);

	if (result == 1)
	{
		printf("%d�� �Ҽ��Դϴ�.\n");
	}
	else
	{
		printf("%d�� �Ҽ��� �ƴմϴ�.\n");
	}

	return 0;
}

int get_integer(void)
{
	int n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	return n;
}

int is_prime(int n)
{
	int divisiors = 0, i;
	for (i = i; i <= n; i++)
	{
		if (n % i == 0)
		{
			divisiors++;
		}
	}

	return (divisiors == 2);
}