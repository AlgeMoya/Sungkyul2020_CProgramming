#include <stdio.h>
#include <stdlib.h>

void init_board(char board[][3]); // 보드를 초기화하는 함수
int get_player_move(int player, char board[][3]); // 사용자의 입력을 받아 게임판 배열에 저장하는 함수
void disp_board(char board[][3]); // 보드를 디스플레이하는 함수

int main()
{
	char board[3][3];
	int player1 = 0, player2 = 1;
	int quit = 0;
	init_board(board); // 배열의 시작주소를 보내서 보드를 초기화한다

	do
	{
		disp_board(board);
		quit = get_player_move(player1, board);
		if (quit == 0)
		{
			disp_board(board);
			quit = get_player_move(player2, board);
			if (quit == 0)
				disp_board(board);
		}

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
		if (player == 0)
		{
			printf("플레이어 0, (x, y) 좌표를 입력해주세요(게임 포기: -1, -1): ");
		}
		else
		{
			printf("플레이어 1, (x, y) 좌표를 입력해주세요(게임 포기: -1, -1): ");
		}
		
		scanf("%d %d", &x, &y);

		if (x == -1 && y == -1) // 사용자가 종료하려고 -1, -1을 입력하면
		{	
			printf("플레이어 %d이/가 게임을 포기했습니다.\n", player);
			return 1; // 함수에서 빠져나가고 1을 반환한다
		}
		if (board[x][y] == ' ')
		{
			break;
		}
		else
		{
			printf("잘못된 위치입니다!\n");
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

// 플레이어 둘 중 하나가 게임을 종료해도 그냥 무조건 게임이 지속되는 문제가 있다.
// 일단은 UI 처리로 반쯤 해결했지만 플레이어 둘 중 하나만 먼저 종료하면 턴 수를 스킵할 수 없을까?
// 승리 조건을 프로그래밍해보고 싶다.