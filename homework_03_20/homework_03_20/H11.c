//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
////malloc calloc realloc free¡∑œ∞
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 10);
//	if (!arr)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 4; i++)
//		*(arr + i) = i + 1;
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(arr + i));
//	printf("\n");
//	free(arr);
//	arr = NULL;
//
//	int* arr1 = (int*)calloc(10,sizeof(int));
//	if (!arr1)
//	{
//		perror("malloc");
//		return 1;
//	}
//	for (i = 0; i < 4; i++)
//		*(arr1 + i) = i + 1;
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(arr1 + i));
//	printf("\n");
//	int* p = (int*)realloc(arr1, 80);
//	if (!p)
//	{
//		perror("realloc");
//		return 1;
//	}
//	for (i = 10; i < 20; i++)
//		*(arr1 + i) = i + 1;
//	for (i = 0; i < 20; i++)
//		printf("%d ", *(arr1 + i));
//	printf("\n");
//	free(arr1);
//	arr1 = NULL;
//	return 0;
//}