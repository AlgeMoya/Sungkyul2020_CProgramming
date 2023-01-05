#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char* GetNextString(char* ap_src_str, char a_delimiter, char* ap_buffer)
{
	while (*ap_src_str && *ap_src_str != a_delimiter) *ap_buffer++ = *ap_src_str++;

	if (*(ap_buffer - 1) == '\n') *(ap_buffer - 1) = 0;
	else *ap_buffer = 0;

	if (*ap_src_str == a_delimiter) ap_src_str++;

	return ap_src_str;
}

int main()
{
	FILE* p_file = NULL;

	char one_line_string[128], str[32], * p_pos;

	const char* p_title_format_table[5] = {
		"    %s    ", "   %s     ", " %s", "  %s ", "  %s \n"
	};

	fopen_s(&p_file, "data.csv", "rt");

	if (0 == fopen_s(&p_file, "data.csv", "rt"))
	{
		if (fgets(one_line_string, 128, p_file) != NULL)
		{
			printf("----------------------------------------------------\n");

			p_pos = one_line_string;

			for (int i = 0; *p_pos; i++)
			{
				p_pos = GetNextString(p_pos, ',', str);
				printf(p_title_format_table[i], str);
			}
			printf("----------------------------------------------------\n");
		}
		fclose(p_file);
	}

	return 0;
}