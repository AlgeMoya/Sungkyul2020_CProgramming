#define _CRT_SECURE_NO_WARNINGS // SDL ��� ������ ���� ����!
#include <stdio.h> // printf, fopen_s, fgets, fclose �Լ��� ����ϱ� ����!

// ap_src_str ���ڿ����� a_delimiter �Ǵ� NULL ���ڰ� ���ö����� ap_buffer �޸𸮿�
// ���ڿ��� �����Ѵ�. �������, ap_src_str�� "abc,def"��� ����ְ� a_delimiter��
// ','�� ���޵Ǹ� ap_buffer���� "abc"���ڿ��� ����ȴ�.
// �׸��� �� �Լ��� �ڽ��� Ž���� �Ϸ��� ��ġ�� �ּҸ� ��ȯ�Ѵ�. �� ���ÿ� �����ϸ�
// "abc,def" ���ڿ��� ','���ڰ� ��ġ�� �ּҸ� ��ȯ�Ѵ�.
char* GetNextString(char* ap_src_str, char a_delimiter, char* ap_buffer)
{
	// NULL ���� �Ǵ� a_delimiter ���ڰ� ���ö����� �ݺ��ϸ鼭 
	// ap_src_str�� ����Ű�� ���ڸ� ap_buffer�� ����Ű�� �޸𸮿� �����Ѵ�.
	while (*ap_src_str && *ap_src_str != a_delimiter) *ap_buffer++ = *ap_src_str++;

	// ������ ��ġ�� �ִ� ���ڰ� �ٹٲ� �����̸� �ٹٲ� ���� ��� NULL ���ڸ� �߰��Ѵ�.
	// �ٹٲ� ���ڰ� �ƴ϶�� ���ڿ��� ���� NULL ���ڸ� �߰��Ѵ�.
	if (*(ap_buffer - 1) == '\n') *(ap_buffer - 1) = 0;
	else *ap_buffer = 0;

	// ap_src_str �����Ͱ� ����Ű�� ��ġ�� ���ڿ� �и��� ���� a_delimiter ������
	// ��ġ�̰ų� NULL ������ ��ġ�Դϴ�. ���� a_delimiter ���� ��ġ�� ����Ų�ٸ�
	// ���� ���ڴ� ',' ���� ��ġ���� ����� ���̱� ������ �ǳʶ��.
	if (*ap_src_str == a_delimiter) ap_src_str++;

	// Ž���� �Ϸ��� ��ġ�� �ּҸ� ��ȯ�Ѵ�.
	return ap_src_str;
}

int main()
{
	FILE *p_file = NULL; // ������ ��� ����� ���� ������!

	// ���Ͽ��� �� ���� ������ �о ������ ������
	// ��ǥ�� �������� �и��� ���ڿ��� ������ ����
	char one_line_string[128], str[32], *p_pos;

	// Ÿ��Ʋ�� ����ϱ� ���� ����� ������ �׸񸶴� �޶� �迭�� ����ؼ� ���̺� �������� �����ؼ� ����մϴ�.
	const char* p_title_format_table[5] = {
		"    %s    ", "   %s     ", " %s", "  %s ", "  %s \n"
	};

	const char* p_data_format_table[5] = {
		"  %s", "%10s", "      %3s", "    %3s", "    %3s\n"
	};

	// fopen_s �Լ��� ����Ͽ� 'data.csv' ������ �ؽ�Ʈ ������ �б� ���� ����!
	// �� �Լ��� ���� ���⿡ �����ߴٸ� 0�� ��ȯ�Ѵ�.
	fopen_s(&p_file, "data.csv", "rt");

	if (0 == fopen_s(&p_file, "data.csv", "rt"))
	{
		// p_file���� �� ���� ������ �ִ� 127����Ʈ���� �о�´�. (ù ���� ������ Ÿ��Ʋ ����!!)
		if (fgets(one_line_string, 128, p_file) != NULL)
		{
			printf("----------------------------------------------------\n");

			// �о���� �� ���� �����Ϳ��� ��ǥ�� �������� ���ڿ��� �и��ϱ� ���� �۾� ���� ��ġ�� �迭�� ���� �ּҷ� �����Ѵ�.
			p_pos = one_line_string;

			// �и� �������� NULL ���ڰ� ���� ������ �۾��� �ݺ��Ѵ�.
			for (int i = 0; *p_pos; i++)
			{
				// ��ǥ�� �������� ���ڿ��� �и��ؼ� str�� �����Ѵ�.
				p_pos = GetNextString(p_pos, ',', str);
				
				// str�� ����Ǿ� �ִ� �и��� ���ڿ��� p_title_format_table�� �־ ����Ѵ�.
				printf(p_title_format_table[i], str);
			}
			printf("----------------------------------------------------\n");
		}

		// ������ ������ �л��� ���� ������ �о���δ�.
		while (NULL != fgets(one_line_string, 128, p_file))
		{
			// �о���� �� ���� �����Ϳ��� ��ǥ�� �������� ���ڿ��� �и��ϱ� ���� �۾� ���� ��ġ�� �迭�� ���� �ּҷ� �����Ѵ�.
			p_pos = one_line_string;

			// �и� �������� NULL ���ڰ� ���� ������ �۾��� �ݺ��Ѵ�.
			for (int i = 0; *p_pos; i++)
			{
				// ��ǥ�� �������� ���ڿ��� �и��ؼ� str�� �����Ѵ�.
				p_pos = GetNextString(p_pos, ',', str);

				// str�� ����Ǿ� �ִ� �и��� ���ڿ��� p_data_format_table�� �־ ����Ѵ�.
				printf(p_data_format_table[i], str);
			}

		}

		printf("----------------------------------------------------\n");
		fclose(p_file); // 'data.csv' ������ �ݴ´�.
	}

	return 0;
}