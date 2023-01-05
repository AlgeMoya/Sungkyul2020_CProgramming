#include <stdio.h>

int is_prime(int); // 함수원형은 함수 형태 확인용으로만 사용하기 때문에 변수가 없어도 본체에만 제대로 되어있다면 컴파일 가능
int get_integer(void);

int main()
{
	int n, result;
	n = get_integer();
	result = is_prime(n);

	if (result == 1)
	{
		printf("%d은 소수입니다.\n");
	}
	else
	{
		printf("%d은 소수가 아닙니다.\n");
	}

	return 0;
}

int get_integer(void)
{
	int n;
	printf("정수를 입력하시오: ");
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