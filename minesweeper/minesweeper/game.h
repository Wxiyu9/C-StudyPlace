#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

//show����������
#define ROW 9
#define COL 9

//mine����������
#define ROWS ROW + 2
#define COLS COL + 2

//����
#define MINE 10

//ʵ��
void game();

//������
void SetMine(char arr[ROW][COL], int row, int col);

//��ʼ������
void Init(char arr[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void DisplayBoard(char arr[ROWS][COLS], int rows, int cols);

//����
void FIneMine(char arr1[ROW][COL], char arr2[ROW][COL], int row, int col);
