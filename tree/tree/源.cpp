#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <windows.h>
//int color(int num)//��ɫ
//{
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), num);
//    return 0;
//}
//int main()
//{
//    int i, j = 2, k = 2, n, space, a, b, c, d, e;
//    printf("�뱦���ѿ����󻯣�Ȼ����Enter");
//    getchar();//����Enter
//    n = 13;
//    for (i = 1; i <= 51; i++)
//    {
//        printf(" ");
//    }
//    printf("11\n");
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//        {
//            k = k + 1;
//            j = k;
//        }
//        for (;; j++)
//        {
//            if (j > i + 1)
//                break;
//            e = (j + 9) % 9;
//            color(e + 1);
//            for (space = 1; space <= 4 * n + 1 - j - j / 2 - 1; space++)
//            {
//                printf(" ");
//            }
//            printf("*");
//            c = space;
//            for (space = 2; space <= 3 * j - 1; space++)
//            {
//                b = (space + 3) % 3;
//                if (b == 2)
//                {
//                    a = 5;
//                }
//                if (b == 0)
//                {
//                    a = 2;
//                }
//                if (b == 1)
//                {
//                    a = 0;
//                }
//                printf("%d", a);
//            }
//            printf("*");
//            printf("\n");
//            d = c + space;
//        }
//
//    }
//    for (i = 1; i <= 5; i++)
//    {
//        for (j = 1; j <= 49; j++)
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= 2; j++)
//        {
//            printf("yue");
//        }
//        printf("\n");
//    }
//    for (j = 1; j <= 38; j++)
//    {
//        printf(" ");
//    }
//    for (space = 1; space <= 2 * n + 1; space++)
//    {
//        if (space == n + 1)
//        {
//            printf("yue");
//            continue;
//        }
//        printf("=");
//    }
//    printf("\n");
//    for (j = 1; j <= 38; j++)
//    {
//        printf(" ");
//    }
//    for (space = 1; space <= 2 * n + 1; space++)
//    {
//        if (space == n + 1)
//        {
//            printf("xin");
//            continue;
//        }
//        printf("=");
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int rows = 10; // ʥ����������
//
//    // ��ӡʥ�����������β���
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < rows - i - 1; j++) {
//            printf(" ");
//        }
//        for (int k = 0; k < 2 * i + 1; k++) {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    // ��ӡʥ�����ĵ�������
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < rows - 3; j++) {
//            printf(" ");
//        }
//        printf("*******\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int rows = 10; // ʥ�����ĸ߶�
//
//    // ��ӡʥ�����������β���
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < rows - i - 1; j++) {
//            printf(" ");
//        }
//        for (int k = 0; k < 2 * i + 1; k++) {
//            printf("��");
//        }
//        printf("\n");
//    }
//
//    // ��ӡʥ�����ĵ�������
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < rows - 3; j++) {
//            printf(" ");
//        }
//        printf("������\n");
//    }
//
//    return 0;
//}
