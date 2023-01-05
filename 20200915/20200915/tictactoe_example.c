#include <stdio.h>
#include <stdlib.h>

void init_board(char board[][3]); // 보드를 초기화하는 함수
int get_player_move(int player, char board[][3]); // 사용자의 입력을 받아 게임판 배열에 저장하는 함수
void disp_board(char board[][3]); // 보드를 디스플레이하는 함수

int main()
{
	char board[3][3];
	int quit = 0;
	init_board(board); // 배열의 시작주소를 보내서 보드를 초기화한다

	do
	{
		disp_board(board);
		quit = get_player_move(0, board);
		disp_board(board);
		quit = get_player_move(1, board);
	} while (quit == 0);

	return 0;
}

void init_board(char board[][3]) // 보드를 초기화하는 함수
{
	int x, y;
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
			board[x][y] = ' '; // 공백으로 채워서 초기화한다
	}
}

void disp_board(char board[][3]) // 보드를 디스플레이하는 함수
{
	int i;
	for (i = 0; i < 3; i++) // 1열 단위로
	{
		printf("---|---|---\n"); // UI 처리용
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]); // 행들을 디스플레이
	}

	printf("---|---|---\n"); // UI 처리용
}

int get_player_move(int player, char board[][3]) // 사용자의 입력을 받아 게임판 배열에 저장하는 함수
{
	int x, y, done = 0;

	while (done != 1)
	{
		printf("(x, y) 좌표(종료: -1, -1): ");
		scanf("%d %d", &x, &y);
		if (x == -1 && y == -1) // 사용자가 종료하려고 -1, -1을 입력하면
		{
			return 1; // 함수에서 빠져나가고 1을 반환한다
		}
		if (board[x][y] == ' ')
		{
			break;
		}
		else
		{
			printf("잘못된 위치입니다.\n");
		}
	}
	
	if (player == 0)
	{
		board[x][y] = 'X'; // 위에서 입력받은 위치에 플레이어 0의 표시인 X를 마킹한다.
	}
	else
	{
		board[x][y] = 'O'; // 위에서 입력받은 위치에 플레이어 1의 표시인 O를 마킹한다.
	}

	return 0;
}