#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int main()
{
	int i = 0, j;
	int t;
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);
	printf("\n");
	for (i = 0; i < 10 - 1; i++)
	{
		for(j=0;j<10-i-1;j++)
			if (a[j] < a[j + 1])
			{
				t= a[j + 1] ;
				a[j + 1] = a[j];
				a[j] = t;
			}
	}
	for (i = 0; i < 10; i++)
		printf("%d", a[i]);
}