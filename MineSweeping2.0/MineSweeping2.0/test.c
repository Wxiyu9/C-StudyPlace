#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
//��ӡ�˵�
void menu()
{
	printf("**********************\n");
	printf("******* 1.play *******\n");
	printf("******* 0.exit *******\n");
	printf("**********************\n");
}
//ʵ����Ϸ
void game()
{
	char show[ROWS][COLS] = { 0 };
	char mine[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(show, '*');
	InitBoard(mine, '0');
	//������
	SetMine(mine);
	//�Ų���
	FindMine(mine, show);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		system("cls");
		if (input == 1)
			game();
		else if (input == 0)
			break;
		else
			printf("�����������������");
	}
	while (input);
	return 0;
}