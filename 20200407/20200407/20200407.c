#include <stdio.h>

int main()
{
	int x;
	double y;

	printf("변수 x의 크기 : %d\n", sizeof(x));
	printf("변수 y의 크기 : %d\n", sizeof(y));
	printf("char형의 크기 : %d\n", sizeof(char));
	printf("int형의 크기 : %d\n", sizeof(int));
	printf("short형의 크기 : %d\n", sizeof(short));
	printf("long형의 크기 : %d\n", sizeof(long));
	printf("float형의 크기 : %d\n", sizeof(float));
	printf("double형의 크기 : %d\n", sizeof(double));

	printf("20200808 강석규\n"); // 학번과 이름 넣기

	return 0;
}