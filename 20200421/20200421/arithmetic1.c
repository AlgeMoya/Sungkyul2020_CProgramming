#include <stdio.h>

int main()
{
	double x, y, result;
	printf("µÎ °³ÀÇ ½Ç¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
	scanf("%lf %lf", &x, &y);

	result = x + y; // µ¡¼À ¿¬»êÀ» ÇÏ¿©¼­ °á°ú¸¦ result¿¡ ´ëÀÔ
 	printf("%f + %f = %f\n", x, y, result);

	result = x - y; // »¬¼À
	printf("%f + %f = %f\n", x, y, result);

	result = x * y; // °ö¼À
	printf("%f + %f = %f\n", x, y, result);

	result = x / y; // ³ª´°¼À
	printf("%f + %f = %f\n", x, y, result);

	return 0;
}