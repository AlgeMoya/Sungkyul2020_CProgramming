#include <stdio.h>

int main()
{
	char name[100]; // 99�ڱ��� �޾� ������ �� �ִ�. 99�ڿ��� ���ڿ��� ���� ��Ÿ���� \0 NULL ���ڰ� ���Եȴ�.
	char address[100];

	printf("�̸��� �Է��Ͻÿ�: ");
	gets(name); // �� �ܾ� �̻��� �Է¹��� ���� ����Ѵ�

	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�: ");
	gets(address); // \n�� �Էµ� ������ �Է��� ������, �������� ���� \n�� ���ڿ��� ���� ��Ÿ���� \0���� ��ȯ�ȴ�.

	puts(name); // �������� �ִ� \0�� \n���� ��ȯ�Ǿ� ������������ ������.
	puts(address);

	return 0;
}