#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//行数
#define ROW 9
#define ROWS ROW + 2

//列数
#define COL 9
#define COLS COL + 2

//雷数
#define EASY_COUNT 9

//初始化棋盘
void InitBoard(char board[ROWS][COLS], char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS]);

//布置雷
void SetMine(char board[ROWS][COLS]);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS]);


