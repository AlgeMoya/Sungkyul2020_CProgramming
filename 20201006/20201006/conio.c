#include <stdio.h>
#include <conio.h>

int main()
{
	int ch;
	while ((ch = _getch()) != 'q') // _getch()�� �տ� ���� ���۸� ��ġ�� �ʰ� �Է¹��� ������ �״�� ���α׷����� ���޵ȴ�. ���ڵ� ������� �����Ƿ� �Է¹��� ���ڸ� ȭ�鿡 ǥ������ �ʴ´�.
	{
		_putch(ch);
	}

	return 0;
}