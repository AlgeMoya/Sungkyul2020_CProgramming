#include <stdio.h>

int main()
{
	int a, b, c, sum;
	float average;
	
	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	average = sum / 3.0;
	
	printf("��: %d  ���: %f", sum, average);

	return 0;
}