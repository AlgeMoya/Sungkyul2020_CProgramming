#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int check(char s[], char a[], char ch);

int main()
{
	int i = 0;
	int count = 0;

	char solulist[10][100] = { "meet at midnight", "hello world", "we have a problem", "aal izz well", "do a barrel roll", "fus ro dah", "i will be back", "i am groot", "the cake is a lie", "life finds a way"};
	char solution[100];
	char answer[100];
	char ch;

	srand(time(NULL));
	int random = rand() % 10; // 0���� 10����

	strcpy(solution, solulist[random]); // solulist[random]�� �����ͼ� solution�� ���δ�

	while (1)
	{
		if (solution[i] >= 'A' && solution[i] <= 'z')
		{
			answer[i] = '_';
			i++;
		}
		else if (solution[i] == ' ')
		{
			answer[i] = ' ';
			i++;
		}
		else if (solution[i] == '\0')
		{
			answer[i] = '\0';
			break;
		}
	}

	while (1)
	{
		printf("���ڿ��� �Է��Ͻÿ�: %s \n", answer);
		printf("���ڸ� �����Ͻÿ�: ");
		printf("���� �õ�Ƚ��: %d\n", count);

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