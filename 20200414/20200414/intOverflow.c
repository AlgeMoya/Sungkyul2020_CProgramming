/* 정수 자료형을 사용하는 프로그램 */
#include <stdio.h>

int main(void)
{
	short year = 0; // 0으로 초기화한다.
	int sale = 0; // 0으로 초기화한다.
	long total_sale = 0; // 0으로 초기화한다.

	year = 10; // 약 3만2천을 넘지 않도록 주의.
	sale = 200000000; // 약 21억을 넘지 않도록 주의.
	total_sale = year * sale; // 약 21억을 넘지 않도록 주의. 

	printf("total_sale = %d\n", total_sale);

	return 0;
}