#include <stdio.h>
#include <string.h>

int main()
{
	FILE* fp;
	char fname[128];
	char buffer[256];
	char word[256];

	int line_num = 0;

	printf("입력 파일 이름을 입력하시오: ");
	scanf("%s", fname);

	printf("탐색할 단어를 입력하시오: ");
	scanf("%s", word);

	// 파일을 읽기 모드로 연다.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s를 열 수 없습니다.\n", fname);
		exit(1);
	}
	
	while (fgets(buffer, 256, fp)) // fp에서 256바이트를 읽어와서 buffer에 입력한다. 1회 반복할 때마다 line_num이 1씩 증가한다.
	{
		line_num++;
		if (strstr(buffer, word))
		{
			printf("%s: %d 단어 %s이 발견되었습니다.\n", fname, line_num, word);
		}
	}

	fclose(fp);
	return 0;
};