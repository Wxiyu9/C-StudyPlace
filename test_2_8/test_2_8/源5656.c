//#include <stdio.h>?
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	}
//	return 0;
//}
#include <stdio.h>
int main()
{
	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
	//输入
	for (int i = 0; i < 3; i++)//遍历行
	{
		for (int n = 0; n < 5; n++)//遍历列
		{
			scanf("%d ", &arr[i][n]);//输入数据
		}
	}
	//输出
	for (int i = 0; i < 3; i++)//遍历行
	{
		for (int n = 0; n < 5; n++)//遍历列
		{
			printf("%d ", arr[i][n]);//输出数据
		}
		printf("\n");
	}
	return 0;
}