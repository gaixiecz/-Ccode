#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "string.h"
xxcz(int a[],int size)
{
	int i,find=0;
	for (i = 0; i < size; i++)
		if (a[i] == 100) find = 1;
	if (find == 1) printf("(���Բ��ҷ�)�ҵ���,100������ĵ�%d��Ԫ��", i-1);
	else printf("û�ҵ�");	
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
		printf("(���ֲ��ҷ�)�ҵ���,100������ĵ�%d��Ԫ��", mid);
	}
	else printf("û�ҵ�");
}
main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,100 };
	int size = sizeof(a) / sizeof(a[0]);
	int i;
	printf("������Ҫ���ҵķ�ʽ,����1Ϊ���Բ���,2Ϊ���ֲ���");
	scanf("%d", &i);
	switch (i)
	{
	case 1:xxcz(a, size); break;
	case 2:efcz(a, size); break;
	default:printf("�������������,������1����2"); break;

	}
}	