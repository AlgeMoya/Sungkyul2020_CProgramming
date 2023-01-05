#include <stdio.h>
#define SIZE 10

int main()
{
	int key, i;
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("탐색할 값을 입력하시오: ");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++) // for 루프를 이용하여 list[i]와 key를 비교하는 연산을 배열의 크기만큼 반복한다. 만약 list[i]와 key가 같으면 탐색은 성공되고 키값이 발견된 배열의 인덱스를 출력한다.
	{
		if (list[i] == key)
			printf("탐색 성공 인덱스 = %d\n", i);
	}

	printf("탐색 종료\n");
	
	return 0;
}