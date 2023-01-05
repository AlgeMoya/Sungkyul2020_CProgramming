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

	printf("플레이어 %d, 좌표를 입력하세요(게임 포기: -1, -1): \n", player);
	scanf("%d %d", &x, &y);

	if (x == -1 && y == -1)
	{
		printf("게임을 포기했습니다.\n");
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
		printf("잘못된 위치입니다!\n");
	}

	return 0;
}


/* 보드를 초기화한다 
while(1)
	보드를 화면에 출력한다.
	사용자로부터 좌표 x, y를 받는다.
	if (board[x][y]가 비어 있으면)
		if (현재 경기자가 'X'이면)
			board[x][y] = 'X'
		else // 현재 경기자가 'Y'이면
			board[x][y] = 'Y'
	else
		오류 메시지를 출력한다
*/

// 잘된다 야발!