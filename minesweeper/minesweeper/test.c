#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//菜单
void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}
//实现
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	Init(mine, ROWS, COLS, '0');
	Init(show, ROWS, COLS, '*');
	SetMine(mine,ROW, COL);
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	FineMine(mine,show,ROW,COL);
}

int main() {
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{	

		menu();
		printf("请选择:>>");
		scanf("%d", &input);
		if (input == 1)
			game();
		else if (input == 0)
			printf("游戏结束\n");
		else
			printf("输入有误，请重新输入\n");
	} while (input);
	return 0;
}