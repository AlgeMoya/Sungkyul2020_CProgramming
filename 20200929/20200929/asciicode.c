// �ƽ�Ű �ڵ� ���
#include <stdio.h>

int main()
{
	unsigned char code;

	for ( code = 32; code < 128; code++)
	{
		printf("�ƽ�Ű �ڵ� %d�� %c�Դϴ�.\n", code, code);
	}

	return 0;
}