// �����͸� ���� ����ü ����
#include <stdio.h>

struct student
{
	int number;
	char name[20];
	double grade;
};

int main()
{	
	struct student s = { 20070001, "ȫ�浿", 4.3 };
	struct student* p;

	p = &s; // ������ p�� s�� ���� ��ġ�� ����Ų��.

	printf("�й�= %d, �̸�= %d, ����= %f \n", s.number, s.name, s.grade);
	printf("�й�= %d, �̸�= %d, ����= %f \n", (*p).number, (*p).name, (*p).grade);
	printf("�й�= %d, �̸�= %d, ����= %f \n", p->number, p->name, p->grade); // ����ü ��� ���� ������
	// ����ü ��� ���� �����ڴ� ����ü �����ͷ� ����ü ����� ������ �� ���. ���� (*p)�� �ٿ��� ������ ������ �����ϰ� �۵��Ѵ�.

	return 0;
}