#include <stdio.h>
#include <string.h>

int main()
{
	char filename[100];
	char s[100];
	int i;

	for (i = 0; i < 6; i++) // �������� ���� �̸��� �����
	{
		strcpy(filename, "image"); // "image"�� ���� �̸��� ���δ�
		sprintf(s, "%d", i); // s�� i�� �ִ´�.
		strcat(filename, s); // filename�� s�� �̾���δ�.
		strcat(filename, ".jpg"); // filename�� ".jpg"�� ���δ�.
		printf("%s \n", filename);
	}

	return 0;
}