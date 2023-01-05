#include <stdio.h>

int main()
{
	int i = 23;
	float f = 1.2345;

	FILE *fp;

	fp = fopen("sample.txt", "w");

	if (fp != NULL)
	{
		fprintf(fp, "%10d %16.3f", i, f); // %d와 같은 특정한 형식을 지정하여 파일 포인터로 전달하는 방식으로 파일에 출력할 수 있다.
	}

	fclose(fp);

	return 0;
}