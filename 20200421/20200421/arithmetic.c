#include <stdio.h>

int main()
{
	int x, y, result;
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	result = x + y; // ����
	printf("%d + %d = %d\n", x, y, result);

	result = x - y; // ����
	printf("%d - %d = %d\n", x, y, result);

	result = x * y; // ����
	printf("%d * %d = %d\n", x, y, result);

	result = x / y; // ������
	printf("%d / %d = %d\n", x, y, result);

	result = x % y; // ������
	printf("%d %% %d = %d\n", x, y, result);

	return 0;
}