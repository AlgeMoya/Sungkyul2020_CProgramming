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
		printf("Ȯ���� �� �����Ͱ� ����� ������ �̸��� �Է��Ͻÿ�: ");
		scanf("%s", fname);
	}
	triggered++;
	
	// fname�� ����� �̸��� Ȯ���� �� ������ ���� ���� ����.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		// ������ ����� ������ �ʾҴٸ� NULL�� ��ȯ�ϴ� ���� �̿��Ѵ�.
		fprintf(stderr, "Ȯ���� �� ������ %s�� �� �� �����ϴ�.\n", fname);
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
		printf("������ Ȯ���� �� �����Ͱ� ����� ������ �̸��� �Է��Ͻÿ�: ");
		scanf("%s", fname);
	}
	triggered++;

	// fname�� ����� �̸��� ���� Ȯ���� �� ������ ���� ���� ����.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		// ������ ����� ������ �ʾҴٸ� NULL�� ��ȯ�ϴ� ���� �̿��Ѵ�.
		fprintf(stderr, "Ȯ���� �� ������ %s�� �� �� �����ϴ�.\n", fname);
		return 0;
	}

	for (int i = 0; i <= 8; i++)
	{
		fscanf(fp, "%d,%s,%d,%d,%d", &date, &region, &confirmed, &death, &released);
		printf("%d %d %d %d", date, confirmed, death, released);
		if (region == "����")
		{
			regional[0][seoul] = confirmed;
			seoul++;
		}
		if (region == "�λ�")
		{
			regional[1][busan] = confirmed;
			busan++;
		}
		if (region == "�뱸")
		{
			regional[2][daegu] = confirmed;
			daegu++;
		}
		if (region == "��õ")
		{
			regional[3][incheon] = confirmed;
			incheon++;
		}
		if (region == "����")
		{
			regional[4][gwangju] = confirmed;
			gwangju++;
		}
		if (region == "����")
		{
			regional[5][daejeon] = confirmed;
			daejeon++;
		}
		if (region == "���")
		{
			regional[6][ulsan] = confirmed;
			ulsan++;
		}
		if (region == "����")
		{
			regional[7][sejong] = confirmed;
			sejong++;
		}
		if (region == "���")
		{
			regional[8][gyeonggi] = confirmed;
			gyeonggi++;
		}
		if (region == "����")
		{
			regional[9][gangwon] = confirmed;
			gangwon++;
		}
		if (region == "���")
		{
			regional[10][chungbuk] = confirmed;
			chungbuk++;
		}
		if (region == "�泲")
		{
			regional[11][chungnam] = confirmed;
			chungnam++;
		}
		if (region == "����")
		{
			regional[12][jeonbuk] = confirmed;
			jeonbuk++;
		}
		if (region == "����")
		{
			regional[13][jeonnam] = confirmed;
			jeonnam++;
		}
		if (region == "���")
		{
			regional[14][gyeongbuk] = confirmed;
			gyeongbuk++;
		}
		if (region == "�泲")
		{
			regional[15][gyeongnam] = confirmed;
			gyeongnam++;
		}
		if (region == "����")
		{
			regional[16][jeju] = confirmed;
			jeju++;
		}
		if (region == "�˿�")
		{
			regional[17][qurantine] = confirmed;
			qurantine++;
		}
	}
	fclose(fp);
}
*/