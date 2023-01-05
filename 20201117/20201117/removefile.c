#include <stdio.h>

int main()
{
	if (remove("sample.txt") == -1) // 파일이 성공적으로 삭제되지 않으면 -1을 반환한다.
	{
		printf("sample.txt를 삭제할 수 없습니다.\n");
	}
	else
	{
		printf("sample.txt를 삭제하였습니다.\n");
	}

	return 0;
}