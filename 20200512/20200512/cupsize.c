#include <stdio.h>

int main()
{
	int cupsize;
	
	printf("���� ����� �Է��ϼ��� : ");
	scanf("%d", &cupsize);

	if (cupsize < 100)
		printf("small������");
	else if (cupsize >= 100 && cupsize < 200)
		printf("medium������");
	else
		printf("large������");

	return 0;
}