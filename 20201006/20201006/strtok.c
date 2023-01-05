// strtok 함수의 사용예
#include <string.h>
#include <stdio.h>

char s[] = "Man is immortal, because he has a soul";
char seps[] = " ,\t\n"; // 공백, 수미표, 탭, 강제개행 이 넷 중 하나를 토큰으로 삼는다. 토큰을 만날 때마다 문자열을 분리한다.
char* token;

int main()
{
	// 문자열을 전달하고 다음 토큰을 얻는다
	token = strtok(s, seps); // s라는 문자열에 대해 seps에 저장된 토큰 종류대로 분리한다. 분리한 토큰의 자리는 \0으로 채운다.

	while (token != NULL) // 더 이상 탐색할 문자가 없으면 strtok()은 NULL을 반환한다.
	{
		// 문자열 s에 토큰이 있는 동안 반복한다.
		printf("토큰 : %s\n", token);
		// 다음 토큰을 얻는다.
		token = strtok(NULL, seps); // NULL을 인수로 주면 기존에 탐색하던 문자열을 계속 탐색한다.
	}

	return 0;
}