#include <stdio.h>
#include <string.h>

int main()
{
	char filename[100];
	char s[100];
	int i;

	for (i = 0; i < 6; i++) // 순차적인 파일 이름을 만든다
	{
		strcpy(filename, "image"); // "image"를 파일 이름에 붙인다
		sprintf(s, "%d", i); // s에 i를 넣는다.
		strcat(filename, s); // filename와 s를 이어붙인다.
		strcat(filename, ".jpg"); // filename와 ".jpg"를 붙인다.
		printf("%s \n", filename);
	}

	return 0;
}