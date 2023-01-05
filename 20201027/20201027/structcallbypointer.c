// 포인터를 통한 구조체 참조
#include <stdio.h>

struct student
{
	int number;
	char name[20];
	double grade;
};

int main()
{	
	struct student s = { 20070001, "홍길동", 4.3 };
	struct student* p;

	p = &s; // 포인터 p가 s의 시작 위치를 가리킨다.

	printf("학번= %d, 이름= %d, 학점= %f \n", s.number, s.name, s.grade);
	printf("학번= %d, 이름= %d, 학점= %f \n", (*p).number, (*p).name, (*p).grade);
	printf("학번= %d, 이름= %d, 학점= %f \n", p->number, p->name, p->grade); // 구조체 멤버 참조 연산자
	// 구조체 멤버 참조 연산자는 구조체 포인터로 구조체 멤버를 참조할 때 사용. 위의 (*p)를 붙여서 참조한 구문과 동일하게 작동한다.

	return 0;
}