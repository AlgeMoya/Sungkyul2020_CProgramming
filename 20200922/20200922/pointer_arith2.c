#include <stdio.h>

int main()
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi);
	(*pi)++; // pi가 가리키는 위치의 값을 증가한다. 즉, i의 값이 증가한다.
	printf("i = %d, pi = %p\n", i, pi);

	printf("i = %d, pi = %p\n", i, pi);
	*pi++; // pi가 가리키는 위치에서 값을 가져온 후에 pi를 증가한다. i를 가져오긴 했지만 증가하는 것은 pi일 뿐 i가 아니다.
	printf("i = %d, pi = %p\n", i, pi);

	return 0;
}