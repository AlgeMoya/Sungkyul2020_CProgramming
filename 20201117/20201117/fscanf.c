#include <stdio.h>

int main()
{
	int i;
	float f;

	FILE* fp;

	fp = fopen("sample.txt", "w");

	if (fp != NULL)
	{
		fscanf(fp, "%d %f", &i, &f); // %d와 같은 특정한 형식을 지정하여 파일으로부터 읽어올 수 있다.
	}

	printf("%d %f", i, f);

	fclose(fp);

	return 0;
}