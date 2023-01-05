#define _CRT_SECURE_NO_WARNINGS // strtok 보안 경고로 인한 컴파일 에러 방지
#include <string.h> // strtok 함수가 선언된 헤더 파일
#include <stdio.h>

int main()
{
	char s1[30] = "The Little Prince"; // 크기가 30인 char형 배열을 선언하고 문자열 할당

	char* ptr = strtok(s1, " "); // " " 공백 문자르 기준으로 문자열을 자름, 포인터 반환

	while (ptr != NULL) // 자른 문자열이 나오지 않을 때까지 반복
	{
		printf("%s\n", ptr); // 자른 문자열 출력
		ptr = strtok(NULL, " "); // 다음 문자열을 잘라서 포인터를 반환
		// strtok 함수는 잘린 문자열을 한 번에 얻을 수 없어서 while 반복문으로 문자열을 계속 자르다가 문자열이 나오지 않으면 반복문을 끝내는 방식으로 사용.
	}

	return 0;
}