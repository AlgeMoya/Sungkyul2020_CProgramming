#include <stdio.h>

int main()
{
	int id, pass;

	printf("���̵�� �н����带 4���� ���ڷ� �Է��ϼ���: \n");

	printf("id: ____\b\b\b\b");
	scanf("%d", &id);

	printf("pass: ____\b\b\b\b");
	scanf("%d", &pass);

	printf("\a�Էµ� ���̵�� \"%d\"�̰� �н������ \"%d\"�Դϴ�.\n\n", id, pass);

	char code = 65;

	printf("%d %d %d\n", code, code + 1, code + 2); // 65 66 67�� ��µȴ�.
	printf("%c %c %c\n", code, code + 1, code + 2); // A B C�� ��µȴ�.

	return 0;
}