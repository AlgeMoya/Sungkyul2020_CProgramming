// strtok �Լ��� ��뿹
#include <string.h>
#include <stdio.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n"; // ����, ����ǥ, ��, �������� �� �� �� �ϳ��� ��ū���� ��´�. ��ū�� ���� ������ ���ڿ��� �и��Ѵ�.
char* token;

int main()
{
	// ���ڿ��� �����ϰ� ���� ��ū�� ��´�
	token = strtok(s, seps); // s��� ���ڿ��� ���� seps�� ����� ��ū ������� �и��Ѵ�. �и��� ��ū�� �ڸ��� \0���� ä���.

	while (token != NULL) // �� �̻� Ž���� ���ڰ� ������ strtok()�� NULL�� ��ȯ�Ѵ�.
	{
		// ���ڿ� s�� ��ū�� �ִ� ���� �ݺ��Ѵ�.
		printf("��ū : %s\n", token);
		// ���� ��ū�� ��´�.
		token = strtok(NULL, seps); // NULL�� �μ��� �ָ� ������ Ž���ϴ� ���ڿ��� ��� Ž���Ѵ�.
	}

	return 0;
}