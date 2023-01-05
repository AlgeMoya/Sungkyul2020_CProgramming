#include <stdio.h>

int main()
{
	double f_temp;
	double c_temp;

	printf("화씨온도를 입력하시오 : ");
	scanf("%lf", &f_temp);
	/* c_temp = 5 / 9 * (f_temp - 32); */ // 이렇게 입력하면 형변환 문제로 값이 0.0이 된다.
	c_temp = 5.0 / 9.0 * (f_temp - 32);
	printf("섭씨온도는 %f입니다.", c_temp);

	return 0;
}