#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int triggered = 0;
char fname[100];

int globalinput(long global[8][6])
{
	FILE* fp;
	long date, confirmed, death, released, tested, negative;

	if (triggered == 0)
	{
		printf("확진자 수 데이터가 저장된 파일의 이름을 입력하시오: ");
		scanf("%s", fname);
	}
	triggered++;
	
	// fname에 저장된 이름의 확진자 수 파일을 쓰기 모드로 연다.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		// 파일이 제대로 열리지 않았다면 NULL을 반환하는 것을 이용한다.
		fprintf(stderr, "확진자 수 데이터 %s를 열 수 없습니다.\n", fname);
		return 0;
	}

	for (int i = 0; i <= 8; i++)
	{
		fscanf(fp, "%d,%d,%d,%d,%d,%d", &date, &confirmed, &death, &released, &tested, &negative);
		global[i][0] = date;
		global[i][1] = confirmed;
		global[i][2] = death;
		global[i][3] = released;
		global[i][4] = tested;
		global[i][5] = negative;
	}

	fclose(fp);
}

/*
int regionalinput(long regional[18][8])
{
	FILE* fp;
	long date, confirmed, death, released;
	char region[6];
	int seoul = 0, busan = 0, daegu = 0, incheon = 0, gwangju = 0, daejeon = 0;
	int ulsan = 0, sejong = 0, gyeonggi = 0, gangwon = 0, chungbuk = 0, chungnam = 0;
	int jeonbuk = 0, jeonnam = 0, gyeongbuk = 0, gyeongnam = 0, jeju = 0, qurantine = 0;

	if (triggered == 1)
	{
		printf("지역별 확진자 수 데이터가 저장된 파일의 이름을 입력하시오: ");
		scanf("%s", fname);
	}
	triggered++;

	// fname에 저장된 이름의 전국 확진자 수 파일을 쓰기 모드로 연다.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		// 파일이 제대로 열리지 않았다면 NULL을 반환하는 것을 이용한다.
		fprintf(stderr, "확진자 수 데이터 %s를 열 수 없습니다.\n", fname);
		return 0;
	}

	for (int i = 0; i <= 8; i++)
	{
		fscanf(fp, "%d,%s,%d,%d,%d", &date, &region, &confirmed, &death, &released);
		printf("%d %d %d %d", date, confirmed, death, released);
		if (region == "서울")
		{
			regional[0][seoul] = confirmed;
			seoul++;
		}
		if (region == "부산")
		{
			regional[1][busan] = confirmed;
			busan++;
		}
		if (region == "대구")
		{
			regional[2][daegu] = confirmed;
			daegu++;
		}
		if (region == "인천")
		{
			regional[3][incheon] = confirmed;
			incheon++;
		}
		if (region == "광주")
		{
			regional[4][gwangju] = confirmed;
			gwangju++;
		}
		if (region == "대전")
		{
			regional[5][daejeon] = confirmed;
			daejeon++;
		}
		if (region == "울산")
		{
			regional[6][ulsan] = confirmed;
			ulsan++;
		}
		if (region == "세종")
		{
			regional[7][sejong] = confirmed;
			sejong++;
		}
		if (region == "경기")
		{
			regional[8][gyeonggi] = confirmed;
			gyeonggi++;
		}
		if (region == "강원")
		{
			regional[9][gangwon] = confirmed;
			gangwon++;
		}
		if (region == "충북")
		{
			regional[10][chungbuk] = confirmed;
			chungbuk++;
		}
		if (region == "충남")
		{
			regional[11][chungnam] = confirmed;
			chungnam++;
		}
		if (region == "전북")
		{
			regional[12][jeonbuk] = confirmed;
			jeonbuk++;
		}
		if (region == "전남")
		{
			regional[13][jeonnam] = confirmed;
			jeonnam++;
		}
		if (region == "경북")
		{
			regional[14][gyeongbuk] = confirmed;
			gyeongbuk++;
		}
		if (region == "경남")
		{
			regional[15][gyeongnam] = confirmed;
			gyeongnam++;
		}
		if (region == "제주")
		{
			regional[16][jeju] = confirmed;
			jeju++;
		}
		if (region == "검역")
		{
			regional[17][qurantine] = confirmed;
			qurantine++;
		}
	}
	fclose(fp);
}
*/