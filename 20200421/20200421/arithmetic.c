#include <stdio.h>

int main()
{
	int x, y, result;
	printf("µÎ °³ÀÇ Á¤¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
	scanf("%d %d", &x, &y);

	result = x + y; // µ¡¼À
	printf("%d + %d = %d\n", x, y, result);

	result = x - y; // »¬¼À
	printf("%d - %d = %d\n", x, y, result);

	result = x * y; // °ö¼À
	printf("%d * %d = %d\n", x, y, result);

	result = x / y; // ³ª´°¼À
	printf("%d / %d = %d\n", x, y, result);

	result = x % y; // ³ª¸ÓÁö
	printf("%d %% %d = %d\n", x, y, result);

	return 0;
}