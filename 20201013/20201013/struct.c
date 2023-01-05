#include <stdio.h>
#include <stdlib.h>
struct student { // 구조체 선언
	int number;
	char name[10];
	double grade;
};

int main()
{
	struct student s; // 구조체 변수 선언

	s.number = 20070001;
	strcpy(s.name, "홍길동");
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);

	printf("학번을 입력하시오: ");
	scanf("%d", &s.number); // 구조체 멤버의 주소 전달

	printf("이름을 입력하시오: ");
	scanf("%s", s.name);

	printf("학점을 입력하시오(실수): ");
	scanf("%lf", &s.grade);

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %f\n", s.grade);

	return 0;
}