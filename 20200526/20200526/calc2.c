#include <stdio.h>

int main()
{
	char op;
	int x, y, result;

	printf("������ �Է��Ͻÿ� ");
	printf("(�� : 2 + 5) ");
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
	case '%': // ������
		result = x % y;
		break;
	case '&': // ��Ʈ AND
		result = x & y;
		printf("%d, %c, %d = %08X", x, op, y, result);
		return 0;
		break;
	case '|': // ��Ʈ OR
		result = x | y;
		printf("%d, %c, %d = %08X", x, op, y, result);
		return 0;
		break;
	case '^': // ��Ʈ XOR
		result = x ^ y;
		printf("%d, %c, %d = %08X", x, op, y, result);
		return 0;
		break;
	default:
		printf("�������� �ʴ� �������Դϴ�. ");
		break;
	}

	printf("%d, %c, %d = %d", x, op, y, result);
	return 0;
}