#include <stdio.h>
#include <conio.h>

int main()
{
	int ch;
	while ((ch = _getch()) != 'q') // _getch()는 앞에 오면 버퍼를 거치지 않고 입력받은 내용이 그대로 프로그램으로 전달된다. 에코도 사용하지 않으므로 입력받은 문자를 화면에 표시하지 않는다.
	{
		_putch(ch);
	}

	return 0;
}