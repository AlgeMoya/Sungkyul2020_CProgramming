#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 45

int main()
{
	int i;

	srand((unsigned)timme(NULL));
	// �õ带 �����ϴ� ���� �Ϲ����� ����� ������ �ð��� �õ�� ����ϴ� ����̴�. ���� �ð��� ������ ������ �޶����� �����̴�.

	for (i = 0; i < 6; i++)
	{
		printf("%d ", 1 + (rand() % MAX)); // 1���� 45����
	}

	return 0;
}