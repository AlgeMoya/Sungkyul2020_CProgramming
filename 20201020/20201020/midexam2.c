#include <stdio.h>
void func_sum_diff(int n1, int n2, int* ptr_sum, int* ptr_diff);

int main()
{
	int sum = 0, diff = 0; // 합과 차를 담을 변수를 선언한다
	func_sum_diff(50, 80, &sum, &diff); // func_sum_diff() 함수에 합과 차를 구할 수와 sum, diff의 주소를 보낸다

	printf("sum = %d\n", sum); // 값이 포인터를 통해 변수로 곧바로 전달되었기 때문에 func_sum_diff() 함수에서 계산한 결과가 그대로 출력된다.
	printf("diff = %d\n", diff);

	return 0;
}

void func_sum_diff(int n1, int n2, int* ptr_sum, int* ptr_diff)
{
	*ptr_sum = n1 + n2; // sum, diff의 복사본이 아닌 주소가 전달되었으므로 값 반환 없이 변수에 그대로 값을 저장할 수 있다.
	*ptr_diff = n1 - n2;
}