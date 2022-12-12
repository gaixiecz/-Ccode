#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "string.h"
xxcz(int a[],int size)
{
	int i,find=0;
	for (i = 0; i < size; i++)
		if (a[i] == 100) find = 1;
	if (find == 1) printf("(线性查找法)找到了,100是数组的第%d个元素", i-1);
	else printf("没找到");	
}
 efcz(int a[],int size)
{     
	int left=0, right=size-1;
	int mid;
	int find=0;
	while (!find&&left <=right)
	{
		mid = (left + right) / 2;
		if (a[mid] == 100) {
			find = 1;
		}
		else
		{
			if (a[mid] < 100) left = mid + 1;
			else right = mid - 1;
		}
	}
	if (find == 1) {
		printf("(二分查找法)找到了,100是数组的第%d个元素", mid);
	}
	else printf("没找到");
}
main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,100 };
	int size = sizeof(a) / sizeof(a[0]);
	int i;
	printf("请输入要查找的方式,输入1为线性查找,2为二分查找");
	scanf("%d", &i);
	switch (i)
	{
	case 1:xxcz(a, size); break;
	case 2:efcz(a, size); break;
	default:printf("输入的数据有误,请输入1或者2"); break;

	}
}	