// �ﰢ �Լ� ���̺귯��
#include <math.h>
#include <stdio.h>
#define RAD_TO_DEG (45.0/atan(1))

int main()
{
	double pi = 3.1415926535;
	double x, y;
	
	double w, h, r, theta;

	x = pi / 2;
	y = sin(x);
	printf("sin(%f) = %f\n", x, y);
	y = sinh(x);
	printf("sinh(%f) = %f\n", x, y);
	y = cos(x);
	printf("cos(%f) = %f\n", x, y);
	y = cosh(x);
	printf("cosh(%f) = %f\n", x, y);

	printf("�غ��� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf, %lf", &w, &h);

	r = sqrt(w * w + h * h);
	theta = RAD_TO_DEG * atan2(h, w);

	printf("���� = %f, ���� = %f\n", r, theta);

	return 0;
}