#include <stdio.h>
#define CLASSES 3
#define STUDENTS 5

int main()
{
	int s[CLASSES][STUDENTS] = {
		{ 0, 1, 2, 3, 4 }, // 첫번째 행의 원소들의 초기값
		{ 10, 11, 12, 13, 14 }, // 두번째 행의 원소들의 초기값
		{ 20, 21, 22, 23, 24 }, // 세번째 행의 원소들의 초기값
	};

	int clas, student, total, subtotal;
	total = 0;

	for (clas = 0; clas < CLASSES; clas++)
	{
		subtotal = 0;
		for (student = 0; student < STUDENTS; student++)
		{
			subtotal += s[clas][student];
		}
		printf("학급 %d의 평균 성적 = %d\n", clas, subtotal / STUDENTS);
		total += subtotal;
	}

	printf("전체 학생들의 평균 성적 = %d\n", total / (CLASSES * STUDENTS));

	return 0;
}