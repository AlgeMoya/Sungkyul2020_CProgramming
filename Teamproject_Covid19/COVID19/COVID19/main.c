#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int menu();

int main()
{
	// int patients[] = { 343, 363, 386, 330, 271, 349, 382 }; // 임시로 사용할 최근 7일간 신규확진자 수.(201125 기준). 나중에 CSV로 바꿀예정.

	menu(); // 메뉴를 표시한다.

	return 0;
}

// 확진자 수 상위 국가는 어디서 가져오지?
/* 필요한 함수 목록 */
/*
최근 7일간 신규 확진자 수
최근 7일간 평균 신규확진자 수
최근 7일간 누적 신규확진자 수
지역별 사회적 거리두기 기준 계산
파일에서 데이터 불러오기
*/

/* 점수를 받을 수 있는 방법 */
/* 
1. 포인터
2. 배열
3. 함수
4. 구조체
5. 파일입출력
*/