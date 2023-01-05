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

// �޴��� ȭ�鿡 ǥ���ϴ� �Լ�
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
		confirmed_7[y] = global[i][1] - global[i - 1][1]; // �ֱ� 7�ϰ� Ȯ���� ��
		y++;
	}
	y = 0;

	for (int i = 0; i < 7; i++)
	{
		confirmed_7_all += confirmed_7[i]; // �ֱ� 7�ϰ� ���� Ȯ���� ��
	}

	confirmedaverage_7 = confirmed_7_all / 7; // �ֱ� 7�ϰ� ��� Ȯ���� ��
	date = global[7][0]; // ��¥

	/*
	for (int i = 0; i < 7; i++)
	{
		printf("%d, ", regional[0][i]);
	}
	printf("\n");
	*/
	
	printf("==============================================\n");
	printf(" 1. �ֱ� 7�ϰ� Ȯ���� ��\n 2. ���� ��ȸ�� �Ÿ��α� �ܰ�\n 3. ��ȸ�� �Ÿ��α� ����\n 4. Ȯ���� �� ���� 5����\n 5. ����\n");
	printf("==============================================\n");

	printf("���ϴ� ����� �����ϼ���: "); // ����ڷκ��� ������ �޴´�
	scanf("%d", &select);

	switch (select)
	{
	case 1: recently(global, date); break; // �ֱ� 7�ϰ� Ȯ���� ��
	case 2: socialdistancegrade(confirmedaverage_7); break; // ��ȸ�� �Ÿ��α� �ܰ� Ȯ��
	case 3: socialdistanceinfo(); break; // ��ȸ�� �Ÿ��α� ���� Ȯ��
	case 4: countryrank(); break; // Ȯ���� �� ���� 5����
	case 5: break; // ���� ��� �����̹Ƿ� �Լ� ���� ����
	default:
		printf("�߸��� �Է°��Դϴ�. ���α׷��� �ٽ� ���� �õ����ּ���.\n");
		return 0;
		break;
	}

	return 0;
}

int recently(long global[8][6], int date)
{
	int confirmedaverage_7, confirmed_7[7], confirmed_7_all = 0, confirmed_all, death_7[7], death_7_all = 0, death_all;
	int released_7[7], released_7_all = 0, released_all, tested, negative;

	confirmed_all = global[8][1]; // ��ü Ȯ���� ��
	death_all = global[8][2]; // ��ü ����� ��
	released_all = global[8][3]; // ��ü ��ġ�� ��
	tested = global[8][4]; // ��ü �˻��� ��
	negative = global[8][5]; // ��ü ���������� ��

	int y = 0;

	for (int i = 7; i >= 1; i--)
	{
		confirmed_7[y] = global[i][1] - global[i - 1][1]; // �ֱ� 7�ϰ� Ȯ���� ��
		y++;
	}
	y = 0;

	for (int i = 7; i >= 1; i--)
	{
		death_7[y] = global[i][2] - global[i - 1][2]; // �ֱ� 7�ϰ� ����� ��
		y++;
	}
	y = 0;

	for (int i = 7; i >= 1; i--)
	{
		released_7[y] = global[i][3] - global[i - 1][3]; // �ֱ� 7�ϰ� ��ġ�� ��
		y++;
	}
	y = 0;

	for (int i = 0; i < 7; i++)
	{
		confirmed_7_all += confirmed_7[i]; // �ֱ� 7�ϰ� ���� Ȯ���� ��
	}
	for (int i = 0; i < 7; i++)
	{
		death_7_all += death_7[i]; // �ֱ� 7�ϰ� ���� Ȯ���� ��
	}
	for (int i = 0; i < 7; i++)
	{
		released_7_all += released_7[i]; // �ֱ� 7�ϰ� ���� Ȯ���� ��
	}

	confirmedaverage_7 = confirmed_7_all / 7; // �ֱ� 7�ϰ� ��� Ȯ���� ��

	printf("%d ����, ", date);

	printf("�ֱ� 7�ϰ� Ȯ���� ��: ");
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
	printf("�ֱ� 7�ϰ� ��� Ȯ���� ���� %d ���̸� ���� Ȯ���� ���� %d ��, ��ü Ȯ���� ���� %d ���Դϴ�.\n", confirmedaverage_7, confirmed_7_all, confirmed_all); 
	printf("���� ����� ���� %d ���̸� ���� ��ġ�� ���� %d ���Դϴ�.\n", death_7_all, released_7_all);
	printf("������� %d ���� �˻縦 �޾����� %d ���� ���� ������ �޾ҽ��ϴ�.\n", tested, negative);
	printf("2���� ���� Ȯ���� ���� ���� ��ȸ�� �Ÿ��α� ������ Ȯ���� ������\n");
	menu();
}

// ��ȸ�� �Ÿ��α� ����
// https://news.seoul.go.kr/welfare/archives/524124
// ǥ ������ ��������
// https://namu.wiki/w/%EC%82%AC%ED%9A%8C%EC%A0%81%20%EA%B1%B0%EB%A6%AC%EB%91%90%EA%B8%B0/%EB%8C%80%ED%95%9C%EB%AF%BC%EA%B5%AD#s-2.3

int socialdistancegrade(int confirmedaverage_7)
{
	double grade;
	int region;

	if (confirmedaverage_7 >= 300)
	{
		grade = 2.0;
		printf("�ֱ� 7�ϰ� ��� Ȯ���� ���� %d ������, ��ȸ�� �Ÿ��α� %.1lf�ܰ��Դϴ�.\n", confirmedaverage_7, grade);
		menu();
	}
	else if (confirmedaverage_7 > 400)
	{
		grade = 2.5;
		printf("�ֱ� 7�ϰ� ��� Ȯ���� ���� %d ������, ��ȸ�� �Ÿ��α� %.1lf�ܰ��Դϴ�.\n", confirmedaverage_7, grade);
		menu();
	}
	else if (confirmedaverage_7 > 800)
	{
		grade = 3.0;
		printf("�ֱ� 7�ϰ� ��� Ȯ���� ���� %d ������, ��ȸ�� �Ÿ��α� %.1lf�ܰ��Դϴ�.\n", confirmedaverage_7, grade);
		menu();
	}
	else
	{
		printf("==============================================\n");
		printf(" 1. ������\n 2. ����, ����\n 3. ������, ����, ���� �� ����\n");
		printf("==============================================\n");
		printf("������ �������ּ���: "); // ����ڷκ��� ������ �޴´�
		scanf("%d", &region);

		switch (region)
		{
		case 1:
			printf("�ֱ� 7�ϰ� ��� Ȯ���� ���� %d ������, ��ȸ�� �Ÿ��α� %.1lf�ܰ��Դϴ�.\n", confirmedaverage_7, socialdistance_seoul(confirmedaverage_7));
			break;
		case 2:
			printf("�ֱ� 7�ϰ� ��� Ȯ���� ���� %d ������, ��ȸ�� �Ÿ��α� %.1lf�ܰ��Դϴ�.\n", confirmedaverage_7, socialdistance_gangwonjeju(confirmedaverage_7));
			break;
		case 3:
			printf("�ֱ� 7�ϰ� ��� Ȯ���� ���� %d ������, ��ȸ�� �Ÿ��α� %.1lf�ܰ��Դϴ�.\n", confirmedaverage_7, socialdistance_all(confirmedaverage_7));
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