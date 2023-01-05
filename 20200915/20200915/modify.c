#include <stdio.h>
#define SIZE 7

void square_array(int a[], int size);
void print_array(int a[], int size);

int main()
{
	int list[SIZE] = { 1, 2, 3, 4, 5, 6, 7 };

	print_array(list, SIZE); // list �迭�� �μ��� ������
	square_array(list, SIZE); // �迭�� ������ ���޵ȴ�. (�μ�: �迭) 
	print_array(list, SIZE);

	// �迭�� ���纻�� �Ѿ�� �ʰ� ������ �Ѿ�� ������ �Լ����� �� �۾��� main()���� �ݿ��ȴ�

	return 0;
}

void square_array(int a[], int size) // �ڷ��� �տ� const�� �־ �迭�� ������ ������ �� �ִ�
{
	int i;

	for (i = 0; i < size; i++)
	{
		a[i] = a[i] * a[i];
	}
}

void print_array(int a[], int size) // �Ű� ������ ������ �̸����� ��޵ȴ�
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%3d ", a[i]);
	}
	printf("\n");
}