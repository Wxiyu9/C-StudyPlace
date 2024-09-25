#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//show棋盘行列数
#define ROW 9
#define COL 9

//mine棋盘行列数
#define ROWS ROW + 2
#define COLS COL + 2

//雷数
#define MINE 10

//实现
void game();

//布置雷
void SetMine(char arr[ROW][COL], int row, int col);

//初始化数组
void Init(char arr[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char arr[ROWS][COLS], int rows, int cols);

//排雷
void FIneMine(char arr1[ROW][COL], char arr2[ROW][COL], int row, int col);
