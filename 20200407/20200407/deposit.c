/* 저축액을 계산하는 프로그램 */
#include <stdio.h>

int main()
{
	int salary; // 월급
	int deposit; // 저축액

	printf("월급을 입력하시오: ");
	scanf("%d", &salary); // 사용자로부터 월급을 입력받는다.

	deposit = 10 * 12 * salary; // 월급에 10 * 12를 곱하여 10년동안의 저축액을 계산한다.

	printf("10년 동안의 저축액: %d\n", deposit); // 결과를 출력한다.

	return 0;
}