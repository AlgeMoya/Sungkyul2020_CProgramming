#include <stdio.h>

int main()
{
	int i;
	float f;

	FILE* fp;

	fp = fopen("sample.txt", "w");

	if (fp != NULL)
	{
		fscanf(fp, "%d %f", &i, &f); // %d�� ���� Ư���� ������ �����Ͽ� �������κ��� �о�� �� �ִ�.
	}

	printf("%d %f", i, f);

	fclose(fp);

	return 0;
}