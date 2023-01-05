#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp;
	char fname[128];
	char buffer[256];
	char word[256];

	int line_num = 0;

	printf("�Է� ���� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", fname);

	printf("Ž���� �ܾ �Է��Ͻÿ�: ");
	scanf("%s", word);

	// ������ �б� ���� ����.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "���� %s�� �� �� �����ϴ�.\n", fname);
		exit(1);
	}
	
	while (fgets(buffer, 256, fp)) // fp���� 256����Ʈ�� �о�ͼ� buffer�� �Է��Ѵ�. 1ȸ �ݺ��� ������ line_num�� 1�� �����Ѵ�.
	{
		line_num++;
		if (strstr(buffer, word))
		{
			printf("%s: %d �ܾ� %s�� �߰ߵǾ����ϴ�.\n", fname, line_num, word);
		}
	}

	fclose(fp);
	return 0;
};