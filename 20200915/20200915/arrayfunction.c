#include <stdio.h>
#define STUDENTS 5
int get_average(int score[], int n); // �Լ����� ����

int main()
{
	int grade[STUDENTS] = { 1, 2, 3, 4, 5 };
	int avg;

	avg = get_average(grade, STUDENTS); // �迭�� �μ��� ���, ������ ���� ȣ��. ���ҹ�ȣ ���� �迭�� �̸��� �����Ѵ�. �迭�� �̸��� �迭�� ���� �ּҸ� �ǹ�
	printf("����� %d�Դϴ�.\n", avg);
	return 0;
}

int get_average(int score[], int n) // �迭�� ������ score[]�� ����
{
	int i;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += score[i]; // �Ű������� �Է¹��� �迭
	}

	return sum / n;
}