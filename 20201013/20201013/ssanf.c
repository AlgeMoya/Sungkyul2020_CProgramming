#include <stdio.h>

int main()
{
	char s1[] = "100 200 300";
	char s2[30];
	int value;

	sscanf(s1, "%d", &value); // ���ڿ����� ���� �����Ѵ�.
	printf("%d\n", value);
	sprintf(s2, "%d", value); // ���ڿ��� ���� ����Ѵ�.
	printf("%d\n", s2);

	return 0;
}