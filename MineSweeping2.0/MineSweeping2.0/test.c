#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//打印菜单
void menu()
{
	printf("**********************\n");
	printf("******* 1.play *******\n");
	printf("******* 0.exit *******\n");
	printf("**********************\n");
}
//实现游戏
void game()
{
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(show, '*');
	InitBoard(mine, '0');
	//布置雷
	SetMine(mine);
	//排查雷
	FindMine(mine, show);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		system("cls");
		if (input == 1)
			game();
		else if (input == 0)
			break;
		else
			printf("输入错误，请重新输入");
	}
	while (input);
	return 0;
}