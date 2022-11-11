#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
main()
{
	int j, s=0, k;
	printf("请输入要判断的数");
	scanf("%d", &j);
	k = j;
	while (k != 0)
	{
		s = s * 10 + k % 10;
		k /= 10;
	}
	if (j == s) printf("这个数是回文数");
	else printf("这个数不是回文数");
}
      