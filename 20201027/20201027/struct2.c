#include <stdio.h>

struct point
{
	int x;
	int y;
};

int main()
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 10, 20 };

	p2 = p1; // ���� ����

	/*
	if (p1 == p2) // �� -> ������ ����!
		printf("p1�� p2�� �����ϴ�.");
	*/

	if ((p1.x == p2.x) && (p1.y == p2.y)) // �ùٸ� ��
		printf("p1�� p2�� �����ϴ�.");

	return 0; // ����ü�� ��ȣ �� ������ ���������� ���� �񱳴� �Ұ���
}