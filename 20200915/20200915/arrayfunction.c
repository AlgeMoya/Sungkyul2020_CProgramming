#include <stdio.h>
#define STUDENTS 5
int get_average(int score[], int n); // 함수원형 선언

int main()
{
	int grade[STUDENTS] = { 1, 2, 3, 4, 5 };
	int avg;

	avg = get_average(grade, STUDENTS); // 배열이 인수인 경우, 참조에 의한 호출. 원소번호 없이 배열의 이름만 전달한다. 배열의 이름은 배열의 시작 주소를 의미
	printf("평균은 %d입니다.\n", avg);
	return 0;
}

int get_average(int score[], int n) // 배열의 원본이 score[]로 전달
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += score[i]; // 매개변수로 입력받은 배열
	}

	return sum / n;
}