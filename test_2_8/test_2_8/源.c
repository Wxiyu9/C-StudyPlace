//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define NDBUG
//#include <assert.h>
//
//int* my_strlen(const char* p)
//{
//	int count = 0;
//	assert(p != NULL);
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdedfadd";
//	int x = my_strlen(arr);
//	printf("%d", x);
//	return 0;
//}

//void swap(int* x, int* y)
//{
//	int i = *y;
//	*y = *x;
//	*x = i;
//}
//int main()
//{
//	int a = 1675;
//	int b = 20654;
//	printf("交换前：a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//	return 0;
//}