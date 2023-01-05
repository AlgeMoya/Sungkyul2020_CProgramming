#include <stdio.h>
#include <string.h>
#define STU_NUMBER 1
#define REG_NUMBER 2

struct student
{
	int type;
	union
	{
		int stu_number; // 학번
		char reg_number[15]; // 주민등록번호
	} id; // 공용체 이름 선언을 나중에 할 수 있다.
	char name[20];
};

void print(struct student s)
{
	switch (s.type)
	{
	case STU_NUMBER:
		print("학번 %d\n", s.id.stu_number);
		print("이름 %s\n", s.name);
		break;
	case REG_NUMBER:
		print("주민등록번호: %s\n", s.id.reg_number);
		print("이름 %s\n", s.name);
		break;
	default:
		print("타입오류\n");
		break;
	}
}

int main()
{
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.stu_number = 20070001;
	strcpy(s1.name, "홍길동");

	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number, "860101-1056076");
	strcpy(s2.name, "김철수");

	print(s1); // 위에서 직접 만든 함수이므로 파이썬과 혼동 금지!
	print(s2);

	return 0;
	// 공용체를 사용하면 메모리 공유가 쉽기 때문에 메모리를 절약하기 좋으므로 더욱 효율적인 프로그램을 작성할 수 있다.
	// 작은 프로젝트에서는 각각의 변수를 만들어도 문제가 되지 않지만, 큰 프로젝트의 경우 유의미한 차이가 될 수 있다.
}