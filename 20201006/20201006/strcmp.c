// strcmp() �Լ�
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[80]; // ù��° �ܾ ������ ���ڹ迭
	char s2[80]; // �ι�° �ܾ ������ ���ڹ迭
	int result;

	printf("ù��° �ܾ �Է��Ͻÿ�: ");
	scanf("%s", &s1);
	printf("�ι�° �ܾ �Է��Ͻÿ�: ");
	scanf("%s", &s2);

	result = strcmp(s1, s2);

	if (result < 0) // strcmp()�� ���ڰ� ���ں��� ���̶�� ������ ��ȯ�Ѵ�
	{
		printf("%s�� %s���� �տ� �ֽ��ϴ�.\n", s1, s2);
	}
	else if (result == 0) // strcmp()�� ���ڰ� ���ڿ� ���ٸ� 0�� ��ȯ�Ѵ�
	{
		printf("%s�� %s�� �����ϴ�.\n", s1, s2);
	}
	else // strcmp()�� ���ڰ� ���ں��� �ڶ�� ����� ��ȯ�Ѵ�
	{
		printf("%s�� %s���� �ڿ� �ֽ��ϴ�.\n", s1, s2);
	}

	return 0;
}