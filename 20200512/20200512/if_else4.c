#include <stdio.h>

int main()
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	if (n >= 100)
		printf("large. �Էµ� ������ 100���� Ů�ϴ�.");
	else
		printf("small. �Էµ� ������ 100���� �۽��ϴ�.");

	return 0;
}