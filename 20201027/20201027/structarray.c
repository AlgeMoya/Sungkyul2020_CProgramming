#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int number;
	char name[20];
	double grade;
};

int main()
{
	struct student list[100]; // 구조체의 배열 선언

	list[2].number = 27;
	strcpy(list[2].name, "홍길동");
	list[2].grade = 178.0;

	struct student list[3] = {
		{1, "Park", 172.8},
		{2, "Kim", 179.2},
		{3, "Lee", 180.3}
	};

	return 0;
}