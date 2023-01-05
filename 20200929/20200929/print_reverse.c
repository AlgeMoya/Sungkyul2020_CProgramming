#include <stdio.h>
void print_reverse(int a[], int n);

int main()
{
	int a[] = { 10, 20, 30, 40, 50 };

	print_reverse(a, 5);

	return 0;
}

void print_reverse(int a[], int n)
{
	int *p = a + n - 1; // 마지막 노드를 가리킨다.
	
	while (p >= a) // 첫번째 노드까지 반복
	{
		printf("%d\n", *p--); // p가 가리키는 위치의 값을 출력하고 감소
	}
}