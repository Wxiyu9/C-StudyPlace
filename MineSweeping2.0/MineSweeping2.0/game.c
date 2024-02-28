#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//初始化棋盘
void InitBoard(char board[ROWS][COLS], char set)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0; n < COLS; n++)
		{
			board[i][n] = set;
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROWS][COLS])
{
	printf("------扫雷游戏------\n");
	for (int m = 0; m <= COL; m++)
		printf("%d ", m);
	printf("\n");
	for (int i = 1; i < ROWS - 1; i++)
	{	
		printf("%d ", i);
		for (int n = 1; n < COLS - 1; n++)
		{
			
			printf("%c ", board[i][n]);
		}
		printf("\n");
	}
}
//布置雷
void SetMine(char board[ROWS][COLS])
{
	int count = EASY_COUNT;
	while (count)
	{
		//产生随机坐标
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//统计周围雷数量
int CountMine(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1] +
		mine[x + 1][y] + mine[x + 1][y + 1] - 8 * '0');
}
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS])
{
	int win = 0;
	while (win < COL * ROW - EASY_COUNT)
	{
		DisplayBoard(show);
		int x = 0;
		int y = 0;
		printf("请输入要排查的坐标：");
		scanf("%d%d", &x, &y);
		if (x > 0 && x <= ROW && y > 0 && x <= COL)
		{
			if (mine[x][y] == '0')
			{
				system("cls");
				show[x][y] = CountMine(mine, x, y) + '0';
				win++;
			}
			else
			{
				system("cls");
				printf("你踩到雷了，游戏结束~~\n");
				DisplayBoard(mine);
				system("pause");
				system("cls");
				break;
			}
		}
		else
		{			
			system("cls");
			printf("坐标不合法，请重新输入\n");

		}
		if (win == COL * ROW - EASY_COUNT)
		{
			printf("恭喜你！！所有地雷均已排除！\n");
			DisplayBoard(mine);
			system("pause");
			system("cls");
		}
	}
}