#include <stdio.h>

int main()
{
	int user, change = 0;
	int price, c5000, c1000, c500, c100, c50, c10;

	printf("물건 값을 입력하시오: ");
	scanf("%d", &price); // 물건 값을 입력받는다.
	printf("사용자가 낸 돈: ");
	scanf("%d", &user);

	change = user - price; // 거스름돈을 change에 저장

	c5000 = change / 5000; // 몫 연산자를 사용하여 5000원권의 개수를 계산한다.
	change = change % 5000; // 나머지 연산자를 사용하여 남은 잔돈을 계산한다.

	c1000 = change / 1000; // 남은 잔돈에서 1000원권의 개수를 계산한다.
	change = change % 1000; // 나머지 연산자를 사용하여 남은 잔돈을 계산한다.

	c500 = change / 500; // 남은 잔돈에서 500원권의 개수를 계산한다.
	change = change % 500; // 나머지 연산자를 사용하여 남은 잔돈을 계산한다.

	c100 = change / 100; // 남은 잔돈에서 100원권의 개수를 계산한다.
	change = change % 100; // 나머지 연산자를 사용하여 남은 잔돈을 계산한다.

	c50 = change / 50; // 남은 잔돈에서 50원권의 개수를 계산한다.
	change = change % 50; // 나머지 연산자를 사용하여 남은 잔돈을 계산한다.

	c10 = change / 10; // 남은 잔돈에서 10원권의 개수를 계산한다.
	change = change % 10; // 나머지 연산자를 사용하여 남은 잔돈을 계산한다.

	printf("오천원권: %d장\n", c5000);
	printf("천원권: %d장\n", c1000);
	printf("오백원권: %d장\n", c500);
	printf("백원권: %d장\n", c100);
	printf("오십원권: %d장\n", c50);
	printf("십원권: %d장\n", c10);

	printf("20200808 강석규\n"); // 학번과 이름 넣기

	return 0;
}