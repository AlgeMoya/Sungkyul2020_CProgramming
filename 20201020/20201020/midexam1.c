#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20] = " Univ.", str2[20] = "Sungkyul";
	printf("%s\n", strcpy(str2, strcat(str2, str1)));

	return 0;
}