// 정수의 제곱을 계산하는 함수 예제
#include <stdio.h>

int square(int n); // 함수원형, 함수의 헤더만
// 선언 이전에 함수의 형태를 저장

int main(void)
{
	int result;
	result = square(5);
	printf("%d", result);
}

int square(int n)
{
	return (n * n);
} 