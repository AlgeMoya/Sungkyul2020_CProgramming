#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	char fname[100];
	long date, confirmed, death, released, tested, negative;
	long global[7][6];
	// long regional[7][6];

	printf("Ȯ���� �� �����Ͱ� ����� ������ �̸��� �Է��Ͻÿ�: ");
	scanf("%s", fname);

	// fname�� ����� �̸��� ���� ������ ���� ���� ����.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		// ������ ����� ������ �ʾҴٸ� NULL�� ��ȯ�ϴ� ���� �̿��Ѵ�.
		fprintf(stderr, "Ȯ���� �� ������ %s�� �� �� �����ϴ�.\n", fname);
		return 0;
	}

	/*
	fscanf(fp, "%d,%d,%d,%d,%d,%d", &date, &confirmed, &death, &released, &tested, &negative);
	printf("%d, %d, %d, %d, %d, %d", date, confirmed, death, released, tested, negative);
	*/

	for (int i = 0; i <= 7; i++)
	{
		fscanf(fp, "%d,%d,%d,%d,%d,%d", &date, &confirmed, &death, &released, &tested, &negative);
		global[i][0] = date;
		global[i][1] = confirmed;
		global[i][2] = death;
		global[i][3] = released;
		global[i][4] = tested;
		global[i][5] = negative;
	}


	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 5; j++)
		{
			printf("%d, ", global[i][j]);
		}
		printf("\n");
	}

	return 0;
}