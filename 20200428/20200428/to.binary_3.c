// 10진수를 입력받아서 2진수로 출력하는 프로그램
#include <stdio.h> // printf와 scanf를 사용하기 위해 stdio.h를 불러온다.

int main() // main 함수 호출
{
	unsigned int num; // 부호 없는 정수형 변수 num을 선언한다
	printf("10진수를 입력하세요 : "); // 사용자에게 10진수 정수 입력을 요청한다.
	scanf("%u", &num); // 사용자로부터 입력받은 값을 변수 num에 저장한다. 이 때 unsigned형이므로 형식 지정자는 %d가 아닌 %u를 사용한다.

	unsigned int mask = 1 << 7; // mask = 10000000
	// 부호 없는 정수형 변수 mask에 1을 입력하면 이진수로는 00000001이 되는데, 비트 이동 연산자 <<로 왼쪽으로 7자리 밀어주면 10000000가 된다.
	printf("입력받은 10진수의 2진수 값은 : "); // 사용자에게 2진수 값을 출력함을 알려준다.

	// 임의로 2진수 8자리 중 1자리만을 1로 만들어서 해당 자릿수별로 AND 연산자를 통해 계산하면 입력된 값의 해당 자릿수별로 일치하는지를 확인할 수 있다.
	int i = 0; // 반복문에서 횟수 확인용으로 사용할 변수 i를 선언한다.
	int digit[7]; // 자릿수별로 저장하기 위해 배열 digit를 선언한다.
	while (i < 7) // 일련의 과정을 mask가 10000000에서 00000001이 될 때까지 7번 반복하여 사용자가 입력한 정수 값을 각 이진수 자릿수별로 출력한다.
	{
		((num & mask) == 0) ? digit[i] = 0 : digit[i] = 1;
		// 현재 mask의 2진수 값인 10000000이 num에 입력된 정수의 2진수 값과 불일치하는지 확인하여 참이면 0, 거짓이면 1을 digit의 i번 자리에 저장한다.
		mask = mask >> 1; // 오른쪽으로 1비트 이동한다. 
		i++; // 1회 반복한 다음 i에 저장된 횟수를 올린다.
	} 
	
	i = 0; // 변수 i를 재사용하기 위해 다시 0으로 초기화한다.

	while (i < 7)
	{
		printf("%d", digit[i]); // digit의 i번 자리에 저장된 값을 출력한다.
		i++; // 1회 반복한 다음 i에 저장된 횟수를 올린다.
	}

	printf("\n"); // 마지막은 깔끔한 강제개행 처리.

	return 0; // 프로그램을 끝낸다.
}