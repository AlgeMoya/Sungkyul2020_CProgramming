#include <stdio.h>

int main()
{
	double width, height, area, perimeter;

	printf("�簢���� ���̸� �Է����ּ���: ");
	scanf("%lf", &width);

	printf("�簢���� ���̸� �Է����ּ���: ");
	scanf("%lf", &height);

	area = width * height; // �簢�� ���̰��� : ���� * ����
	perimeter = 2 * (width + height); // �簢�� �ѷ����� : (���� + ����) * 2

	printf("�簢���� ����: %lf\n�簢���� �ѷ�: %lf\n", area, perimeter);

	return 0;
}