#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int menu();
int globalinput(long global[7][6]);
int regionalinput(long regional[18][8]);
int recently(long global[8][6], int date);
int socialdistancegrade(int confirmedaverage_7);
double socialdistance_seoul(int confirmedaverage_7);
double socialdistance_gangwonjeju(int confirmedaverage_7);
double socialdistance_all(int confirmedaverage_7);
int socialdistanceinfo();
int countryrank();

// 메뉴를 화면에 표시하는 함수
int menu()
{
	int select;

	long global[8][6];
	// long regional[18][8];
	int date = 0;
	int confirmedaverage_7, confirmed_7[7], confirmed_7_all = 0;
	int y = 0;

	globalinput(global);
	// regionalinput(regional);

	for (int i = 7; i >= 1; i--)
	{
		confirmed_7[y] = global[i][1] - global[i - 1][1]; // 최근 7일간 확진자 수
		y++;
	}
	y = 0;

	for (int i = 0; i < 7; i++)
	{
		confirmed_7_all += confirmed_7[i]; // 최근 7일간 누적 확진자 수
	}

	confirmedaverage_7 = confirmed_7_all / 7; // 최근 7일간 평균 확진자 수
	date = global[7][0]; // 날짜

	/*
	for (int i = 0; i < 7; i++)
	{
		printf("%d, ", regional[0][i]);
	}
	printf("\n");
	*/
	
	printf("==============================================\n");
	printf(" 1. 최근 7일간 확진자 수\n 2. 현재 사회적 거리두기 단계\n 3. 사회적 거리두기 정보\n 4. 확진자 수 상위 5개국\n 5. 종료\n");
	printf("==============================================\n");

	printf("원하는 기능을 선택하세요: "); // 사용자로부터 정수를 받는다
	scanf("%d", &select);

	switch (select)
	{
	case 1: recently(global, date); break; // 최근 7일간 확진자 수
	case 2: socialdistancegrade(confirmedaverage_7); break; // 사회적 거리두기 단계 확인
	case 3: socialdistanceinfo(); break; // 사회적 거리두기 정보 확인
	case 4: countryrank(); break; // 확진자 수 상위 5개국
	case 5: break; // 종료 기능 선택이므로 함수 넣지 말기
	default:
		printf("잘못된 입력값입니다. 프로그램을 다시 열고 시도해주세요.\n");
		return 0;
		break;
	}

	return 0;
}

int recently(long global[8][6], int date)
{
	int confirmedaverage_7, confirmed_7[7], confirmed_7_all = 0, confirmed_all, death_7[7], death_7_all = 0, death_all;
	int released_7[7], released_7_all = 0, released_all, tested, negative;

	confirmed_all = global[8][1]; // 전체 확진자 수
	death_all = global[8][2]; // 전체 사망자 수
	released_all = global[8][3]; // 전체 완치자 수
	tested = global[8][4]; // 전체 검사자 수
	negative = global[8][5]; // 전체 음성판정자 수

	int y = 0;

	for (int i = 7; i >= 1; i--)
	{
		confirmed_7[y] = global[i][1] - global[i - 1][1]; // 최근 7일간 확진자 수
		y++;
	}
	y = 0;

	for (int i = 7; i >= 1; i--)
	{
		death_7[y] = global[i][2] - global[i - 1][2]; // 최근 7일간 사망자 수
		y++;
	}
	y = 0;

	for (int i = 7; i >= 1; i--)
	{
		released_7[y] = global[i][3] - global[i - 1][3]; // 최근 7일간 완치자 수
		y++;
	}
	y = 0;

	for (int i = 0; i < 7; i++)
	{
		confirmed_7_all += confirmed_7[i]; // 최근 7일간 누적 확진자 수
	}
	for (int i = 0; i < 7; i++)
	{
		death_7_all += death_7[i]; // 최근 7일간 누적 확진자 수
	}
	for (int i = 0; i < 7; i++)
	{
		released_7_all += released_7[i]; // 최근 7일간 누적 확진자 수
	}

	confirmedaverage_7 = confirmed_7_all / 7; // 최근 7일간 평균 확진자 수

	printf("%d 기준, ", date);

	printf("최근 7일간 확진자 수: ");
	for (int i = 0; i < 7; i++)
	{
		printf("%d", confirmed_7[i]);
		if (i < 6)
		{
			printf(",");
		}
		printf(" ");
	}

	printf("\n");
	printf("최근 7일간 평균 확진자 수는 %d 명이며 누적 확진자 수는 %d 명, 전체 확진자 수는 %d 명입니다.\n", confirmedaverage_7, confirmed_7_all, confirmed_all); 
	printf("누적 사망자 수는 %d 명이며 누적 완치자 수는 %d 명입니다.\n", death_7_all, released_7_all);
	printf("현재까지 %d 명이 검사를 받았으며 %d 명이 음성 판정을 받았습니다.\n", tested, negative);
	printf("2번을 눌러 확진자 수에 따른 사회적 거리두기 기준을 확인해 보세요\n");
	menu();
}

// 사회적 거리두기 기준
// https://news.seoul.go.kr/welfare/archives/524124
// 표 가독성 개선버전
// https://namu.wiki/w/%EC%82%AC%ED%9A%8C%EC%A0%81%20%EA%B1%B0%EB%A6%AC%EB%91%90%EA%B8%B0/%EB%8C%80%ED%95%9C%EB%AF%BC%EA%B5%AD#s-2.3

int socialdistancegrade(int confirmedaverage_7)
{
	double grade;
	int region;

	if (confirmedaverage_7 >= 300)
	{
		grade = 2.0;
		printf("최근 7일간 평균 확진자 수는 %d 명으로, 사회적 거리두기 %.1lf단계입니다.\n", confirmedaverage_7, grade);
		menu();
	}
	else if (confirmedaverage_7 > 400)
	{
		grade = 2.5;
		printf("최근 7일간 평균 확진자 수는 %d 명으로, 사회적 거리두기 %.1lf단계입니다.\n", confirmedaverage_7, grade);
		menu();
	}
	else if (confirmedaverage_7 > 800)
	{
		grade = 3.0;
		printf("최근 7일간 평균 확진자 수는 %d 명으로, 사회적 거리두기 %.1lf단계입니다.\n", confirmedaverage_7, grade);
		menu();
	}
	else
	{
		printf("==============================================\n");
		printf(" 1. 수도권\n 2. 강원, 제주\n 3. 수도권, 강원, 제주 외 전국\n");
		printf("==============================================\n");
		printf("지역을 선택해주세요: "); // 사용자로부터 정수를 받는다
		scanf("%d", &region);

		switch (region)
		{
		case 1:
			printf("최근 7일간 평균 확진자 수는 %d 명으로, 사회적 거리두기 %.1lf단계입니다.\n", confirmedaverage_7, socialdistance_seoul(confirmedaverage_7));
			break;
		case 2:
			printf("최근 7일간 평균 확진자 수는 %d 명으로, 사회적 거리두기 %.1lf단계입니다.\n", confirmedaverage_7, socialdistance_gangwonjeju(confirmedaverage_7));
			break;
		case 3:
			printf("최근 7일간 평균 확진자 수는 %d 명으로, 사회적 거리두기 %.1lf단계입니다.\n", confirmedaverage_7, socialdistance_all(confirmedaverage_7));
			break;
		default:
			break;
		}

		menu();
	}
}

double socialdistance_seoul(int confirmedaverage_7)
{
	double grade;

	if (confirmedaverage_7 <= 100)
	{
		grade = 1.0;
		return grade;
	}
	else if (confirmedaverage_7 > 100 && confirmedaverage_7 <= 200)
	{
		grade = 1.5;
		return grade;
	}
	else if (confirmedaverage_7 > 200)
	{
		grade = 2.0;
		return grade;
	}
}

double socialdistance_all(int confirmedaverage_7)
{
	double grade;

	if (confirmedaverage_7 <= 30)
	{
		grade = 1.0;
		return grade;
	}
	else if (confirmedaverage_7 > 30 && confirmedaverage_7 <= 60)
	{
		grade = 1.5;
		return grade;
	}
	else if (confirmedaverage_7 > 60)
	{
		grade = 2.0;
		return grade;
	}
}

double socialdistance_gangwonjeju(int confirmedaverage_7)
{
	double grade;

	if (confirmedaverage_7 <= 10)
	{
		grade = 1.0;
		return grade;
	}
	else if (confirmedaverage_7 > 10 && confirmedaverage_7 <= 20)
	{
		grade = 1.5;
		return grade;
	}
	else if (confirmedaverage_7 > 20)
	{
		grade = 2.0;
		return grade;
	}
}

/*
int sum(int persons[])
{
	int temp = 0;

	for (int i = 0; i < 7; i++)
	{
		temp += persons[i];
	}

	return temp;
}

int average(int persons[])
{
	int temp = 0;

	for (int i = 0; i < 7; i++)
	{
		temp += persons[i];
	}

	return temp / 7;
}
*/