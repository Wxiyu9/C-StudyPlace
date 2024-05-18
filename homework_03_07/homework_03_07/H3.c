#define _CRT_SECURE_NO_WARNINGS 1
//Ä£ÄâÊµÏÖstrcat
#include <stdio.h>
char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}

int main()
{
	char s1[30] = "adsf";
	char s2[30] = "bbbb";
	my_strcat(s1, s2);
	printf("%s", s1);
	return 0;
}