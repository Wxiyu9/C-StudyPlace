#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//����
#define ROW 9
#define ROWS ROW + 2

//����
#define COL 9
#define COLS COL + 2

//����
#define EASY_COUNT 9

//��ʼ������
void InitBoard(char board[ROWS][COLS], char set);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS]);

//������
void SetMine(char board[ROWS][COLS]);

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS]);


