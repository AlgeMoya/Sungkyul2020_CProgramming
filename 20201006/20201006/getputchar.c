// getchar()�� ���
#include <stdio.h>

int main()
{
	int ch; // �������� ����
	
	while ((ch = getchar()) != EOF) // End of File�� ��Ÿ���� ����, EOF�� �������̴�.
	{
		putchar(ch);
	}

	return 0;
}