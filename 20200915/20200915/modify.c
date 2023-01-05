#include <stdio.h>
#define SIZE 7

void square_array(int a[], int size);
void print_array(int a[], int size);

int main()
{
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 };

	print_array(list, SIZE); // list 배열을 인수로 보내도
	square_array(list, SIZE); // 배열은 원본이 전달된다. (인수: 배열) 
	print_array(list, SIZE);

	// 배열은 복사본이 넘어가지 않고 원본이 넘어가기 때문에 함수에서 한 작업이 main()에도 반영된다

	return 0;
}

void square_array(int a[], int size) // 자료형 앞에 const를 넣어서 배열의 수정을 방지할 수 있다
{
	int i;

	for (i = 0; i < size; i++)
	{
		a[i] = a[i] * a[i];
	}
}

void print_array(int a[], int size) // 매개 변수에 정해진 이름으로 취급된다
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%3d ", a[i]);
	}
	printf("\n");
}