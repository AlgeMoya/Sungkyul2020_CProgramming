#include <stdio.h>
void encrypt(char cipher[], int shift);
void decrypt(char cipher[], int shift);

int main()
{
	char cipher[50];
	int choose, shift;

	printf("��ȣȭ�� 1, ��ȣȭ�� 2�� �Է��ϼ���: ");
	scanf("%d", &choose);

	if (choose == 1)
	{
		printf("��ȣȭ�� ���ڿ��� �Է��ϼ���: ");
		scanf("%s", cipher);
		// gets(cipher)
		printf("��ȣȭ�� �ڸ����� �Է��ϼ���: ");
		scanf("%d", &shift);

		encrypt(cipher, shift);
	}
	else if (choose == 2)
	{
		printf("��ȣȭ�� ���ڿ��� �Է��ϼ���: ");
		scanf("%s", cipher);
		// gets(cipher)
		printf("��ȣȭ�� �ڸ����� �Է��ϼ���: ");
		scanf("%d", &shift);

		decrypt(cipher, shift);
	}
	else
	{
		printf("�߸��� �Է��Դϴ�!");
	}

	return 0;
}

void encrypt(char cipher[], int shift)
{
	int i = 0;

	while (cipher[i] != '\0') // \0�� ������ ������
	{
		if (cipher[i] >= 'a' && cipher[i] <= 'z') // �ҹ��ڿ� ���ؼ��� ó���Ѵ�.
		{
			cipher[i] += shift; // �ƽ�Ű �ڵ尪�� shift��ŭ �̵��Ѵ�.

			if (cipher[i] > 'z') // ���� ���ڰ� �빮�ڷ� �з������ٸ�
			{
				cipher[i] -= 26; // �ҹ��ڷ� �ǵ�����.
			}
		}
		i++;
	}
	printf("��ȣȭ�� ���ڿ�: %s", cipher);
}

void decrypt(char cipher[], int shift)
{
	int i = 0;

	while (cipher[i] != '\0') // \0�� ������ ������
	{
		if (cipher[i] >= 'a' && cipher[i] <= 'z') // �ҹ��ڿ� ���ؼ��� ó���Ѵ�.
		{
			cipher[i] -= shift; // �ƽ�Ű �ڵ尪�� shift��ŭ �̵��Ѵ�.

			if (cipher[i] < 'a') // ���� ���ڰ� �ҹ��� ������ �з������ٸ�
			{
				cipher[i] += 26; // �ҹ��ڷ� �ǵ�����.
			}
		}
		i++;
	}
	printf("��ȣȭ�� ���ڿ�: %s", cipher);
}