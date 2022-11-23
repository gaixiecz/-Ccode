#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "math.h"
int sushu(int a)
{
	int i;
	for (i = 2; i <= sqrt(a); i++)
		if (a % 2 == 0) return 0;
	return 1;
}
main()
{
	int a;
	printf("请输入你要判断的数:");
	scanf("%d", &a);
	if (sushu(a)) printf("这个数是素数");
	else printf("这个数不是素数");
}