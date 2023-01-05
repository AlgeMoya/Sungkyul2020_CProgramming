#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp;
	char fname[100];
	long date, confirmed, death, released, tested, negative;
	long global[7][6];
	// long regional[7][6];

	printf("확진자 수 데이터가 저장된 파일의 이름을 입력하시오: ");
	scanf("%s", fname);

	// fname에 저장된 이름의 성적 파일을 쓰기 모드로 연다.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		// 파일이 제대로 열리지 않았다면 NULL을 반환하는 것을 이용한다.
		fprintf(stderr, "확진자 수 데이터 %s를 열 수 없습니다.\n", fname);
		return 0;
	}

	/*
	fscanf(fp, "%d,%d,%d,%d,%d,%d", &date, &confirmed, &death, &released, &tested, &negative);
	printf("%d, %d, %d, %d, %d, %d", date, confirmed, death, released, tested, negative);
	*/

	for (int i = 0; i <= 7; i++)
	{
		fscanf(fp, "%d,%d,%d,%d,%d,%d", &date, &confirmed, &death, &released, &tested, &negative);
		global[i][0] = date;
		global[i][1] = confirmed;
		global[i][2] = death;
		global[i][3] = released;
		global[i][4] = tested;
		global[i][5] = negative;
	}


	for (int i = 0; i <= 7; i++)
	{
		for (int j = 0; j <= 5; j++)
		{
			printf("%d, ", global[i][j]);
		}
		printf("\n");
	}

	return 0;
}