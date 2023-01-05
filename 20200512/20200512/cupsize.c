#include <stdio.h>

int main()
{
	int cupsize;
	
	printf("컵의 사이즈를 입력하세요 : ");
	scanf("%d", &cupsize);

	if (cupsize < 100)
		printf("small사이즈");
	else if (cupsize >= 100 && cupsize < 200)
		printf("medium사이즈");
	else
		printf("large사이즈");

	return 0;
}