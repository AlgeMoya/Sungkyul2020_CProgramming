#define _CRT_SECURE_NO_WARNINGS // SDL ��� ������ ���� ����!
#include <stdio.h>

int main()
{
	FILE* p_file;
	char str[64];

	// ���� ���⸦ �õ��Ѵ�!
	p_file = fopen("tips.txt", "rt");

	if (p_file != NULL)
	{
		// ���� ���⿡ ������ ���!
		if (fgets(str, 64, p_file) != NULL)
		{
			// ���� �б⿡ ������ ���, �ش� ���ڿ��� ȭ�鿡 ����Ѵ�!
			printf("%s", str);
		}
		else
		{
			// ���Ͽ��� ���� �б⸦ ������ ���!
			printf("���Ͽ��� ���ڿ��� ���� �� �����ϴ�.\n");
		}

		fclose(p_file); // ������ �� ��������� ������ �ݴ´�.
	}

	return 0;
}