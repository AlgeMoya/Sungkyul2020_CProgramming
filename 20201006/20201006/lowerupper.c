#include <stdio.h>
#include <ctype.h>

int main()
{
	int c;

	while ((c = getchar()) != EOF) // �Է¹��� ���ڰ� End of File�� �ƴ϶�� ��� �ݺ�. EOF�� Ű���忡�� �Է��Ϸ��� ^Z. getchar()�� ���ڿ��� �Է¹��� �� �ִ�.
	{
		if (islower(c))
		{
			c = toupper(c);
		}
		putchar(c);
	}

	return 0;
}