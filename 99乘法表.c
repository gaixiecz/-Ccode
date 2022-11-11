#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
main()
{
	int i=1, j;
	do {
		
		j = 1;
		while (j <= i)
		{
			printf("%d*%d=%d\t", j, i, j * i);
			j++;
		}
		printf("\n");
		i++;

	} while (i <= 9);
}