#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

char plane[6][50] = {"          _   \n","  _      \\ \\       \n"," \\ \\______\\ \\______ \n","  > _______  ______>       \n"," /_/      / /\n","         /_/ \n"};

void goto_xy(int x, int y)//��λ���λ�õ�ָ������
{
    HANDLE hOut;
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { x,y };
    SetConsoleCursorPosition(hOut, pos);
}
void FirstStep()
{
    for (int j = 0; j < 45; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            goto_xy(j, i);
            printf("%s", plane[i]);
        }
        goto_xy(50, 7);
        printf("ʿ��   ʿ��");
        Sleep(200);
        if (j == 44)
            Sleep(500); 
        system("cls");
    }
}

void SecondStep()
{
    for (int i = 7; i < 20; i++)
    {
        for (int k = 0; k < 6; k++)
        {
            goto_xy(44, k);
            printf("%s", plane[k]);
        }
        goto_xy(50, i);
        printf("ʿ�� ��˧ ʿ��");
        if (i == 7)
            Sleep(500);
        Sleep(500);
        system("cls");
    }
}

int main()
{	
    CONSOLE_CURSOR_INFO cci;
    cci.bVisible = FALSE;
    cci.dwSize = sizeof(cci);
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
    FirstStep();
    SecondStep();
	return 0;
}

