#include <stdio.h>

int main()
{
	char src[] = "The worst things to eat before you sleep";
	char dst[100];

	int i;

	printf("원본 문자열 = %s\n", src);

	for ( i = 0; src[i] != NULL; i++) // NULL 문자가 나올 때까지 반복하면서 각각의 문자들을 새로운 배열로 복사한다.
	{
		dst[i] = src[i];
	}

	dst[i] = NULL;

	printf("복사된 문자열 = %s\n", dst);

	return 0;
}