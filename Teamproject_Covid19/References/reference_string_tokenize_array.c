#define _CRT_SECURE_NO_WARNINGS // strtok ���� ����� ���� ������ ���� ����
#include <string.h> // strtok �Լ��� ����� ��� ����
#include <stdio.h>

int main()
{
	char s1[30] = "The Little Prince"; // ũ�Ⱑ 30�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�

	char* ptr = strtok(s1, " "); // " " ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ

	while (ptr != NULL) // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
	{
		printf("%s\n", ptr); // �ڸ� ���ڿ� ���
		ptr = strtok(NULL, " "); // ���� ���ڿ��� �߶� �����͸� ��ȯ
		// strtok �Լ��� �߸� ���ڿ��� �� ���� ���� �� ��� while �ݺ������� ���ڿ��� ��� �ڸ��ٰ� ���ڿ��� ������ ������ �ݺ����� ������ ������� ���.
	}

	return 0;
}