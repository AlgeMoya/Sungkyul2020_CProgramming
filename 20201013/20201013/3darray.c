#include <stdio.h>
#include <string.h>
#define ENTRIES 5

int main()
{
	int i, index;

	char dic[ENTRIES][2][30] = {
		{"book", "å"},
		{"boy", "�ҳ�"},
		{"computer", "��ǻ��"},
		{"language", "���"},
		{"rain", "��"},
	}; // [�迭 ��: n��° �ܾ�][�ܾ� ��: �ܾ� 1, �ܾ� 2][�ܾ� ����: \0�� ���Ƿ� �ִ� 29����]

	char word[30];

	printf("�ܾ �Է��Ͻÿ�:");
	scanf("%s", word); // word�� �迭, �� �����ͷ� �̹� &�� ������ �迭�� ���� �ּҸ� ǥ���ϱ� ������ ���ڿ��� ������ �迭 ��� �ÿ��� &�� �����Ѵ�.

	index = 0;

	for (i = 0; i < ENTRIES; i++)
	{
		if (strcmp(dic[index][0], word) == 0) // string compare, �� �Ű������� ���� ������ 0�� ��ȯ�ȴ�. 3���� �迭�� �ּҸ��� �����ϹǷ� 2���� �迭ó�� �Է��Ѵ�.
		{
			printf("%s: %s\n", word, dic[index][1]);
			return 0;
		}
		index++;
	}

	printf("�������� �߰ߵ��� �ʾҽ��ϴ�.\n");
	
	return 0;
}