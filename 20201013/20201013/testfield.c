#include <stdio.h>
void func_sum_diff(int n1, int n2, int* ptr_sum, int* ptr_diff);

int main()
{
	int sum = 0, diff = 0; // �հ� ���� ���� ������ �����Ѵ�
	func_sum_diff(50, 80, &sum, &diff); // func_sum_diff() �Լ��� �հ� ���� ���� ���� sum, diff�� �ּҸ� ������

	printf("sum = %d\n", sum); // ���� �����͸� ���� ������ ��ٷ� ���޵Ǿ��� ������ func_sum_diff() �Լ����� ����� ����� �״�� ��µȴ�.
	printf("diff = %d\n", diff);

	return 0;
}

void func_sum_diff(int n1, int n2, int* ptr_sum, int* ptr_diff)
{
	*ptr_sum = n1 + n2; // sum, diff�� ���纻�� �ƴ� �ּҰ� ���޵Ǿ����Ƿ� �� ��ȯ ���� ������ �״�� ���� ������ �� �ִ�.
	*ptr_diff = n1 - n2;
}