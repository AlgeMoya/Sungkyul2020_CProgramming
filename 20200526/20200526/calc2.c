#include <stdio.h>

int main()
{
	char op;
	int x, y, result;

	printf("수식을 입력하시오 ");
	printf("(예 : 2 + 5) ");
	printf(">>");
	
	scanf("%d, %c, %d", &x, &op, &y);

	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	case '%': // 나머지
		result = x % y;
		break;
	case '&': // 비트 AND
		result = x & y;
		printf("%d, %c, %d = %08X", x, op, y, result);
		return 0;
		break;
	case '|': // 비트 OR
		result = x | y;
		printf("%d, %c, %d = %08X", x, op, y, result);
		return 0;
		break;
	case '^': // 비트 XOR
		result = x ^ y;
		printf("%d, %c, %d = %08X", x, op, y, result);
		return 0;
		break;
	default:
		printf("지원되지 않는 연산자입니다. ");
		break;
	}

	printf("%d, %c, %d = %d", x, op, y, result);
	return 0;
}