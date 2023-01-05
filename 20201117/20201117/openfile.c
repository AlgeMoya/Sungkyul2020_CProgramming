#include <stdio.h>

int main()
{
	FILE *fp = NULL;

	fp = fopen("sample.txt", "w");

	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
	}
	else
	{
		printf("파일 열기 성공\n");
	}

	fclose(fp); // 파일을 더 이상 사용하지 않을 때는 fclose()를 사용하여 파일을 저장하고 RAM에서 삭제한다.

	return 0;
}