#include <stdio.h>

struct point
{
	int x;
	int y;
};

int main()
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 10, 20 };

	p2 = p1; // 대입 가능

	/*
	if (p1 == p2) // 비교 -> 컴파일 오류!
		printf("p1와 p2이 같습니다.");
	*/

	if ((p1.x == p2.x) && (p1.y == p2.y)) // 올바른 비교
		printf("p1와 p2이 같습니다.");

	return 0; // 구조체는 상호 간 대입은 가능하지만 직접 비교는 불가능
}