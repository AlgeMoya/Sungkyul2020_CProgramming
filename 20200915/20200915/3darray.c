#include <stdio.h>

int main()
{
	int s[3][3][3]; // 3���� �迭 ����
	int x, y, z; // 3���� �ε��� ����
	int i = 1; // �迭 ���ҿ� ����Ǵ� ��

	for (z = 0; z < 3; z++)
		for (y = 0; y < 3; y++)
			for (x = 0; x < 3; x++)
				s[x][y][z] = i++;

	return 0;
}