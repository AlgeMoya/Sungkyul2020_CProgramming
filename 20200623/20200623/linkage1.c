#include <stdio.h>
int all_files; // �ٸ� �ҽ� ���Ͽ����� ����� �� �ִ� ���� ����
static int this_file; // ������ �ҽ� ���Ͽ����� ����� �� �ִ� ���� ����
extern void sub();

int main()
{
	sub();
	printf("%d\n", all_files);

	return 0;
}