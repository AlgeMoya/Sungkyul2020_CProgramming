#include <stdio.h>

int main()
{
	if (remove("sample.txt") == -1) // ������ ���������� �������� ������ -1�� ��ȯ�Ѵ�.
	{
		printf("sample.txt�� ������ �� �����ϴ�.\n");
	}
	else
	{
		printf("sample.txt�� �����Ͽ����ϴ�.\n");
	}

	return 0;
}