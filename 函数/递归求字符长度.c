#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;

}
main()
{
	char arr[] = "gaixiecz";
	printf("%d", my_strlen(arr));

}