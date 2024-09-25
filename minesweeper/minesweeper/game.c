#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//初始化数组
void Init(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i; i < rows; i++)//error
	{
		int o = 0;
		for (o; o < cols; o++)//error
		{
			arr[i][o] = set;
		}
	}
}
//布置雷
void SetMine(char arr[ROWS][COLS], int row, int col)//error
{
	int count = MINE;
	while (count)
	{
		int i = rand() % row + 1;
		int o = rand() % col + 1;
		if (arr[i][o] == '0')
		{
			arr[i][o] = '1';
			count--;
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int rows, int cols)
{
	printf("--------扫雷--------\n");
	int q = 0;
	for (q; q <= cols; q++)
		printf("%d ", q);
	printf("\n");
	int i = 1;
	for(i; i <= rows; i++)
	{
		printf("%d ", i);
		int o = 1;
		for (o; o <= cols; o++)
		{
			printf("%c ", board[i][o]);
		}
		printf("\n");
	}
}
//统计周围雷数
int num(char arr[ROWS][COLS], int x, int y)//error
{
	return arr[x - 1][y - 1] + 
		arr[x - 1][y] + 
		arr[x - 1][y + 1] +
		arr[x][y - 1] + 
		arr[x][y + 1] + 
		arr[x + 1][y - 1] +
		arr[x + 1][y] + 
		arr[x + 1][y + 1] - 8 * '0';
}
//排雷
void FineMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	while (win < ROW * COL - MINE)
	{
		int x = 0;
		int y = 0;
		printf("请输入要探测的坐标:>>");
		scanf("%d %d", &x, &y);
		if (x <= row && x > 0 && y <= col && y > 0)
		{
			if (mine[x][y] == '1')
			{
				printf("糟糕！踩到雷了，游戏结束！\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int number = num(mine, x, y);
				show[x][y] = number + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
			printf("坐标不正确，请重新输入\n");
	}
	if (win == ROW * COL - MINE)
	{
		printf("恭喜你！排出了所有的雷\n");
	}
}

	