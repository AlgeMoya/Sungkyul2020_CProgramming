#include <stdio.h>

int main()
{
	char s[80];

	printf("���ڿ��� �Է��Ͻÿ�: ");
	scanf("%[abc]", s); // ���ڿ����� �Է¹޵� ���ڿ��� ���� �� a, b, c�� �Է¹޾� �����Ѵ�.

	printf("�Էµ� ���ڿ� = %s\n", s);

	return 0;
}