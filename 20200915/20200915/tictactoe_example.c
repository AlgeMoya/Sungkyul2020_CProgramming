#include <stdio.h>
#include <stdlib.h>

void init_board(char board[][3]); // ���带 �ʱ�ȭ�ϴ� �Լ�
int get_player_move(int player, char board[][3]); // ������� �Է��� �޾� ������ �迭�� �����ϴ� �Լ�
void disp_board(char board[][3]); // ���带 ���÷����ϴ� �Լ�

int main()
{
	char board[3][3];
	int quit = 0;
	init_board(board); // �迭�� �����ּҸ� ������ ���带 �ʱ�ȭ�Ѵ�

	do
	{
		disp_board(board);
		quit = get_player_move(0, board);
		disp_board(board);
		quit = get_player_move(1, board);
	} while (quit == 0);

	return 0;
}

void init_board(char board[][3]) // ���带 �ʱ�ȭ�ϴ� �Լ�
{
	int x, y;
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
			board[x][y] = ' '; // �������� ä���� �ʱ�ȭ�Ѵ�
	}
}

void disp_board(char board[][3]) // ���带 ���÷����ϴ� �Լ�
{
	int i;
	for (i = 0; i < 3; i++) // 1�� ������
	{
		printf("---|---|---\n"); // UI ó����
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]); // ����� ���÷���
	}

	printf("---|---|---\n"); // UI ó����
}

int get_player_move(int player, char board[][3]) // ������� �Է��� �޾� ������ �迭�� �����ϴ� �Լ�
{
	int x, y, done = 0;

	while (done != 1)
	{
		printf("(x, y) ��ǥ(����: -1, -1): ");
		scanf("%d %d", &x, &y);
		if (x == -1 && y == -1) // ����ڰ� �����Ϸ��� -1, -1�� �Է��ϸ�
		{
			return 1; // �Լ����� ���������� 1�� ��ȯ�Ѵ�
		}
		if (board[x][y] == ' ')
		{
			break;
		}
		else
		{
			printf("�߸��� ��ġ�Դϴ�.\n");
		}
	}
	
	if (player == 0)
	{
		board[x][y] = 'X'; // ������ �Է¹��� ��ġ�� �÷��̾� 0�� ǥ���� X�� ��ŷ�Ѵ�.
	}
	else
	{
		board[x][y] = 'O'; // ������ �Է¹��� ��ġ�� �÷��̾� 1�� ǥ���� O�� ��ŷ�Ѵ�.
	}

	return 0;
}