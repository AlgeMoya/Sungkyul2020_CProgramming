#include <string.h>
#include <stdio.h>

int main()
{
	char s[] = "language";
	char c = 'g';
	char* p;
	int loc;

	p = strchr(s, c); // ������ ���ڿ����� ������ ������ ��ġ�� ã���ִ� �Լ�. strchr���� ��ȯ�� �ּҸ� ������ p�� �����Ѵ�. strchr()���� �߰����� ���ߴٸ� NULL�� ��ȯ���ش�.
	loc = (int)(p - s); // �������� ��ġ(ex. 103) - ���ڿ��� ��ġ(ex. 100)�� ����ϸ� ���ڿ��� �� ��° �ڸ��� strchr���� ã�� ���ڰ� ����ִ� ���� �� �� �ִ�.
	// char���̱� ������ �Ϲ����� ���нİ� ������ 1 ������ ����� �� �ִ�. �켱 ���� char���� ����� ���� int�� ����ȯ�ؼ� �����Ѵ�.


	if (p != NULL) // strchr()�� ���������� �۵��ߴٸ� loc���� ��� ������ ����Ǿ��� ���̰� �ƴ϶�� NULL�� ����Ǿ��� ���̴�.
	{
		printf("ù��° %c�� %d���� �߰ߵǾ���\n", c, loc);
	}
	else
	{
		printf("%c�� �߰ߵ��� �ʾ���\n", c);
	}

	return 0;
}