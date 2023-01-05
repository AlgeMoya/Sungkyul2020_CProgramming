#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void disp_car(int car_number, int distance);

int main()
{
	int i;
	int car1_dist = 0, car2_dist = 0;

	srand((unsigned)time(NULL));

	for (i = 0; i < 6; i++) // 총 5회 반복
	{
		car1_dist += rand() % 100; // 0에서 99까지
		car2_dist += rand() % 100; // 0에서 99까지
		disp_car(1, car1_dist);
		disp_car(2, car2_dist);
		// 랜덤이기 때문에 둘 중 어느게 빠를지 모름

		printf("----------------------------------- \n");
		getch(); // 키보드 입력을 대기
	}

	return 0;
}

void disp_car(int car_number, int distance)
{
	int i;
	printf("CAR #%d: ", car_number);
	for (i = 0; i < distance/10; i++)
	{
		printf("*");
	}
	printf("\n");
}