#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[] = "100";
	char s2[] = "12.93";
	char buffer[100];
	int i;
	double d, result;

	i = atoi(s1); // ���ڿ��� ���������� ��ȯ
	d = atof(s2); // ���ڿ��� �Ǽ������� ��ȯ

	result = i + d; // ������ + �Ǽ����̹Ƿ� �ڵ����� �Ǽ������� ����ȯ

	sprintf(buffer, "%f", result); // �Ǽ����� ���ڿ��� ��ȯ
	printf("���� ����� %s�Դϴ�.\n", buffer);

	return 0;
}