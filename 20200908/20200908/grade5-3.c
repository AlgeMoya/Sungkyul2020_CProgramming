#include <stdio.h>

int main()
{
	int grade[5]; // �迭�� �ʱ�ȭ�ϰų� ���� �Է������� ������
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("grade[%d] = %d\n", i, grade[i]); // �Է������� �ʾҴ� ���ǹ��� ������ ���� ��µȴ�.
	}

	return 0;
}