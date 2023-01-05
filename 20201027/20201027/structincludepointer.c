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

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);
	printf("생년월일: %d년 %d월 %d일\n", s.dob->year, s.dob->month, s.dob->day);

	return 0;
}

int equal(struct student const* p1, struct student const* p2) // 포인터를 통한 구조체의 변경을 막는다.
{
	if (strcmp(p1->name, p2->name) == 0)
		return 1;
	else
		return 0;
}

struct student make_student()
{
	struct student s; // 선언된 구조체 s는 지역 변수

	printf("나이: ");
	scanf("%d", &s.age);
	printf("이름: ");
	scanf("%s", s.name);
	printf("나이: ");
	scanf("%f", &s.grade);

	return s; // 구조체 s의 복사본이 반환된다.
}