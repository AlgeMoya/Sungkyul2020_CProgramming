#include <stdio.h>

void init_board(char board[3][3]);
void disp_board(char board[3][3]);
int get_player(int player, char board[3][3]);

int main()
{	
	int quit = 0;
	
	int player1 = 0, player2 = 1;
	char board[3][3];
	init_board(board);
	disp_board(board);

	while (quit == 0)
	{
		quit = get_player(player1, board);
		if (quit == 0)
		{
			disp_board(board);
			quit = get_player(player2, board);
			if (quit == 0)
				disp_board(board);
		}
	}

	return 0;
}

void init_board(char board[3][3])
{
	int x, y;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			board[x][y] = ' ';
		}
	}
}

void disp_board(char board[3][3])
{
	int x;

	printf("---|---|---\n");

	for ( x = 0; x < 3; x++)
	{
		printf(" %c | %c | %c \n", board[x][0], board[x][1], board[x][2]);
		printf("---|---|---\n");
	}
}

int get_player(int player, char board[3][3])
{
	int x, y;

	printf("�÷��̾� %d, ��ǥ�� �Է��ϼ���(���� ����: -1, -1): \n", player);
	scanf("%d %d", &x, &y);

	if (x == -1 && y == -1)
	{
		printf("������ �����߽��ϴ�.\n");
		return 1;
	}

	if (board[x][y] == ' ')
	{
		if (player == 0)
		{
			board[x][y] = 'X';
		}
		else
		{
			board[x][y] = 'O';
		}
	}
	else
	{
		printf("�߸��� ��ġ�Դϴ�!\n");
	}

	return 0;
}


/* ���带 �ʱ�ȭ�Ѵ� 
while(1)
	���带 ȭ�鿡 ����Ѵ�.
	����ڷκ��� ��ǥ x, y�� �޴´�.
	if (board[x][y]�� ��� ������)
		if (���� ����ڰ� 'X'�̸�)
			board[x][y] = 'X'
		else // ���� ����ڰ� 'Y'�̸�
			board[x][y] = 'Y'
	else
		���� �޽����� ����Ѵ�
*/

// �ߵȴ� �߹�!