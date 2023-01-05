#include <stdio.h>

int main()
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	if (n >= 100)
		printf("large. 입력된 정수가 100보다 큽니다.");
	else
		printf("small. 입력된 정수가 100보다 작습니다.");

	return 0;
}