#include <stdio.h>
int check(char s[], char a[], char ch);

int main()
{
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;

	while (1)
	{
		printf("���ڿ��� �Է��Ͻÿ�: %s \n", answer);
		printf("���ڸ� �����Ͻÿ�: ");
		ch = getchar();

		if (check(solution, answer, ch) == 1) // ������ ���߾��ٸ� check���� 1�� ��ȯ�Ѵ�
		{
			break;
		}
		fflush(stdin); // Ű���� ���ۿ� �����ִ� ����(ex. ����)�� �����Ѵ�.
	}

	return 0;
}

int check(char s[], char a[], char ch) // solution, answer, ch
{
	int i;

	for (i = 0; s[i] != NULL; i++) // \0, ���ڿ��� ���� ���� ������
	{
		if (s[i] == ch) // solution�� i��° ���ڰ� �Է¹��� ���ڿ� ���ٸ�
		{
			a[i] = ch; // a�� i��° ���ڸ� �Է¹��� ���ڷ� �ٲ۴�
		}
	}
	if (strcmp(s, a) == 0) // �� ���� ���ڿ��� ���� ��ġ�ϴ���, �� ����� ��ġ�ϴ����� �˻�
	{
		return 1; // ��ġ�ϸ� 1�� ��ȯ
	}
	else
	{
		return 0; // ����ġ�ϸ� 0�� ��ȯ
	}
}