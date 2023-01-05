#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

struct student
{
	int number;
	char name[20];
	double grade;
	struct date *dob; // Date of Birth
};

int main()
{
	struct date d = { 3, 20, 1980 };
	struct student s = { 20080001, "Kim", 4.3 };

	s.dob = &d;

	printf("�й�: %d\n", s.number);
	printf("�̸�: %s\n", s.name);
	printf("����: %f\n", s.grade);
	printf("�������: %d�� %d�� %d��\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}

int equal(struct student const* p1, struct student const* p2) // �����͸� ���� ����ü�� ������ ���´�.
{
	if (strcmp(p1->name, p2->name) == 0)
		return 1;
	else
		return 0;
}

struct student make_student()
{
	struct student s; // ����� ����ü s�� ���� ����

	printf("����: ");
	scanf("%d", &s.age);
	printf("�̸�: ");
	scanf("%s", s.name);
	printf("����: ");
	scanf("%f", &s.grade);

	return s; // ����ü s�� ���纻�� ��ȯ�ȴ�.
}