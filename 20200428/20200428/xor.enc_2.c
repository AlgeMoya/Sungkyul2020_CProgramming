// XOR �����ڸ� ���� char�� ������ ����� ���ڸ� ��ȣȭ�ϴ� ���α׷�
#include <stdio.h> // printf�� scanf�� ����ϱ� ���� stdio.h�� �ҷ��´�.

int main() // main �Լ� ȣ��
{
	char data; // char�� ���� data�� �����Ѵ�.
	char key = 0xff; // char�� ���� key�� XOR �����ڸ� ���� ��ȣȭ�� ����� Ű�� �����Ѵ�. ���ÿ����� '0xff'��.

	printf("������ 1���� �Է��ϼ��� : "); // ����ڿ��� ������ 1�� �Է��� ��û�Ѵ�.
	scanf("%c", &data); // char�� ���� data�� ����ڷκ��� �Է¹��� ���� �����Ѵ�.

	char encrypted_data; // char�� ���� encrypted_data�� �����Ѵ�.
	encrypted_data = data ^ key; // XOR �����ڷ� ���� key�� ��ȣȭ Ű ��� data�� ��ȣȭ�Ѵ�.

	printf("��ȣȭ�� ���� = %c \n", encrypted_data); // ��ȣȭ�� data�� ����� encrypted_data�� ��µȴ�.

	char orig_data; // char�� ���� orig_data�� �����Ѵ�.
	orig_data = encrypted_data ^ key; // encrypted_data�� key�� ������ ���� �����ϴٸ� ��ȣȭ ������ data�� ����� ���� Ȯ���� �� �ִ�.
	printf("������ ������ = %c \n", orig_data); // orig_data���� ��ȣȭ�Ǳ� ���� data�� ����� ���� �Ȱ��� ����Ǿ��ִ�.

	return 0; // ���α׷��� ������.
}