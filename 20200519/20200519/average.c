#include <stdio.h>

int main()
{
	int a, b, c, sum;
	float average;
	
	printf("3개의 정수를 입력하시오: ");
	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	average = sum / 3.0;
	
	printf("합: %d  평균: %f", sum, average);

	return 0;
}