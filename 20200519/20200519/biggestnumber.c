#include <stdio.h>

int main()
{
	int x, y, z, biggest;

	printf("3���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d %d", &x, &y, &z);

	biggest = (x > y) ? x : y;
	biggest = (biggest > z) ? biggest : z;

	printf("�ִ밪: %d", biggest);

	return 0;
}