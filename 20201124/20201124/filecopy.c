#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE* fp1, * fp2;
	char file1[100], file2[100];
	char buffer[1024];
	int count;

	printf("첫번째 파일 이름: ");
	scanf("%s", file1);
	printf("두번째 파일 이름: ");
	scanf("%s", file2);

	// 첫번째 파일을 읽기 모드로 연다.
	if ((fp1 = fopen(file1, "rb")) == NULL)
	{
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}

	// 두번째 파일을 추가 모드로 연다.
	if ((fp2 = fopen(file2, "ab")) == NULL)
	{
		fprintf(stderr, "입력을 위한 파일을 열 수 없습니다.\n");
		exit(1);
	}

	// 첫번째 파일을 두번째 파일 끝에 추가한다.
	while ((count = fread(buffer, sizeof(char), 1024, fp1)) > 0)
	{
		fwrite(buffer, sizeof(char), count, fp2);
	}

	fclose(fp1);
	fclose(fp2);
	
	return 0;
}