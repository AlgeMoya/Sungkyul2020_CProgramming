#include <stdio.h>
#include <string.h>
#define ENTRIES 5

int main()
{
	int i, index;

	char dic[ENTRIES][2][30] = {
		{"book", "책"},
		{"boy", "소년"},
		{"computer", "컴퓨터"},
		{"language", "언어"},
		{"rain", "비"},
	}; // [배열 수: n번째 단어][단어 수: 단어 1, 단어 2][단어 길이: \0이 들어가므로 최대 29글자]

	char word[30];

	printf("단어를 입력하시오:");
	scanf("%s", word); // word는 배열, 즉 포인터로 이미 &를 가지는 배열의 시작 주소를 표현하기 때문에 문자열을 포함한 배열 사용 시에는 &를 생략한다.

	index = 0;

	for (i = 0; i < ENTRIES; i++)
	{
		if (strcmp(dic[index][0], word) == 0) // string compare, 두 매개변수의 값이 같으면 0이 반환된다. 3차원 배열의 주소만을 전달하므로 2차원 배열처럼 입력한다.
		{
			printf("%s: %s\n", word, dic[index][1]);
			return 0;
		}
		index++;
	}

	printf("사전에서 발견되지 않았습니다.\n");
	
	return 0;
}