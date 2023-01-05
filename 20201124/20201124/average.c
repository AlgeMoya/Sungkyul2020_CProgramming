#include <stdio.h>

int main()
{
	FILE* fp;
	char fname[100];
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	printf("성적 파일 이름을 입력하시오: ");
	scanf("%s", fname);

	// fname에 저장된 이름의 성적 파일을 쓰기 모드로 연다.
	if ((fp = fopen(fname, "w")) == NULL)
	{
		// 파일이 제대로 열리지 않았다면 NULL을 반환하는 것을 이용한다.
		fprintf(stderr, "성적 파일 %s를 열 수 없습니다.\n", fname);
		exit(1);
	}

	// 사용자로부터 학번, 이름, 성적을 입력받아서 파일에 저장한다.
	while (1)
	{
		printf("학번, 이름, 성적을 입력하시오(음수이면 종료): "); // 무한반복 코드에는 반드시 종료 조건이 있어야 한다.
		scanf("%d", &number);

		if (number < 0)
		{
			break;
		}

		scanf("%s %f", name, &score);
		fprintf(fp, "%d %s %f", number, name, score); // 파일에 %d, %s, %f를 write한다. 
		// fp를 바꾸면 가리키는 파일이 바뀌가 떄문에 얼마든지 다른 파일에 저장할 수도 있다.
	}

	fclose(fp);

	// 성적 파일을 읽기 모드로 연다.
	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "성적 파일 %s를 열 수 없습니다.\n", fname);
		exit(1);
	}

	// 파일에서 성적을 읽어서 평균을 구한다.
	while (!feop(fp))
	{
		fscanf(fp, "%d %s %f", &number, name, &score);
		total += score;
		count++;
	}

	printf("평균 = %f\n", total / count);
	
	fclose(fp);
	
	return 0;
}