// �ҹ��ڸ� �빮�ڷ� �����Ѵ�.
#include <stdio.h>

int main()
{
	char letter;

	while (1)
	{
		printf("�ҹ��ڸ� �Է��Ͻÿ�: ");
		scanf(" %c", &letter);  // %c ���� ���⸦ ���ְ� �ٽ� �����鼭 ���̸� Ȯ���غ���.

		if (letter == 'Q')
			break;
		if (letter < 'a' || letter > 'z')
			continue;

		letter -= 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);
	}

	printf("20200808 ������\n");
	return 0;
}