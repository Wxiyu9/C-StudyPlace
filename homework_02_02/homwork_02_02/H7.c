//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////����ת�Ʊ��д������
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		printf("*************************\n");
//		printf("*****  1.add  2.sub  ****\n");
//		printf("*****  3.mul  4.div  ****\n");
//		printf("*****      0.exit    ****\n");
//		printf("*************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input < 5 && input > 0)
//		{
//			int a = 0;
//			int b = 0;
//			printf("�������������");
//			scanf("%d%d", &a, &b);
//			int(*p[5])(int x, int y) = { 0,add,sub,mul,div };
//			switch (input)
//			{
//			case 1:
//				printf("%d\n",(*p[1])(a, b));
//				break;
//			case 2:
//				printf("%d\n", (*p[2])(a, b));
//				break;
//			case 3:
//				printf("%d\n", (*p[3])(a, b));
//				break;
//			case 4:
//				printf("%d\n", (*p[4])(a, b));
//				break;
//			}
//		}
//		else if (input == 0)
//			printf("�˳�...\n");
//		else
//			printf("�����������������...\n");
//	} while (input);
//	return 0;
//}