#include <stdio.h>

int main()
{
	FILE* fp;
	char fname[100];
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	printf("���� ���� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", fname);

	// fname�� ����� �̸��� ���� ������ ���� ���� ����.
	if ((fp = fopen(fname, "w")) == NULL)
	{
		// ������ ����� ������ �ʾҴٸ� NULL�� ��ȯ�ϴ� ���� �̿��Ѵ�.
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", fname);
		exit(1);
	}

	// ����ڷκ��� �й�, �̸�, ������ �Է¹޾Ƽ� ���Ͽ� �����Ѵ�.
	while (1)
	{
		printf("�й�, �̸�, ������ �Է��Ͻÿ�(�����̸� ����): "); // ���ѹݺ� �ڵ忡�� �ݵ�� ���� ������ �־�� �Ѵ�.
		scanf("%d", &number);

		if (number < 0)
		{
			break;
		}

		scanf("%s %f", name, &score);
		fprintf(fp, "%d %s %f", number, name, score); // ���Ͽ� %d, %s, %f�� write�Ѵ�. 
		// fp�� �ٲٸ� ����Ű�� ������ �ٲ ������ �󸶵��� �ٸ� ���Ͽ� ������ ���� �ִ�.
	}

	fclose(fp);

	// ���� ������ �б� ���� ����.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "���� ���� %s�� �� �� �����ϴ�.\n", fname);
		exit(1);
	}

	// ���Ͽ��� ������ �о ����� ���Ѵ�.
	while (!feop(fp))
	{
		fscanf(fp, "%d %s %f", &number, name, &score);
		total += score;
		count++;
	}

	printf("��� = %f\n", total / count);
	
	fclose(fp);
	
	return 0;
}