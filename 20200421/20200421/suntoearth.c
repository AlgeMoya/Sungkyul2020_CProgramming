#include <stdio.h>

int main()
{
	double light_speed = 300000; // 빛의 속도 저장하는 변수
	double distance = 149600000; // 태양과 지구 사이 거리 저장하는 변수, 149600000km로 초기화한다.
	double time; // 시간을 나타내는 변수

	time = distance / light_speed; // 거리를 빛의 속도로 나눈다.
	time = time / 60.0; // 초를 분으로 변환한다.
	
	printf("빛의 속도는 %lfkm/s \n", light_speed);
	printf("태양과 지구와의 거리 %lfkm \n", distance);
	printf("도달 시간은 %lf초\n", time); // 시간을 출력한다.

	return 0;
}