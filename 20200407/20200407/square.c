#include <stdio.h>

int main()
{
	double width, height, area, perimeter;

	printf("사각형의 길이를 입력해주세요: ");
	scanf("%lf", &width);

	printf("사각형의 높이를 입력해주세요: ");
	scanf("%lf", &height);

	area = width * height; // 사각형 넓이공식 : 길이 * 높이
	perimeter = 2 * (width + height); // 사각형 둘레공식 : (길이 + 높이) * 2

	printf("사각형의 넓이: %lf\n사각형의 둘레: %lf\n", area, perimeter);

	return 0;
}