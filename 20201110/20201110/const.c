#include <stdio.h>

int main()
{
	char s[] = "Barking dogs seldom bite"; // 짖는 개는 물지 않는다.
	char t[] = "A bad workman blames his tools"; // 장인은 도구를 탓하지 않는다.

	const char* p = s; // 포인터가 가리키는 곳의 내용을 변경할 수 없도록 고정한다.
	char* const q = s; // 포인터가 다른 주소를 가리키지 못하도록 고정한다.
	
	// p[3] = 'a'; // p가 가리키는 곳의 내용을 변경할 수 없다.

	p = t; // 하지만 p는 변경이 가능하다.

	q[3] = 'a'; // a가 가리키는 곳의 내용은 변경할 수 있다.

	// q = t; // 하지만 q는 변경이 불가능하다.

	return 0;
}