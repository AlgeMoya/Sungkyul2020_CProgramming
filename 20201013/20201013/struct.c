#include <stdio.h>
#include <stdlib.h>
struct student { // ����ü ����
	int number;
	char name[10];
	double grade;
};

int main()
{
	struct student s; // ����ü ���� ����

	s.number = 20070001;
	strcpy(s.name, "ȫ�浿");
	s.grade = 4.3;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);

	printf("�й��� �Է��Ͻÿ�: ");
	scanf("%d", &s.number); // ����ü ����� �ּ� ����

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", s.name);

	printf("������ �Է��Ͻÿ�(�Ǽ�): ");
	scanf("%lf", &s.grade);

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);

	return 0;
}