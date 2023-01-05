#include <stdio.h>

union ip_address
{
	unsigned long laddr;
	unsigned char saddr[4];
};

int main()
{
	union ip_address addr;

	addr.saddr[0] = 1;
	addr.saddr[1] = 0;
	addr.saddr[2] = 0;
	addr.saddr[3] = 127;

	printf("%x\n", addr.laddr);

	return 0;
	// 공용체를 사용하면 똑같은 값을 쉽게 다른 표현방식으로 볼 수 있다.
}