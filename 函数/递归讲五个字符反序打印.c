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
	printf("��������Ҫ�жϵ���:");
	scanf("%d", &a);
	if (sushu(a)) printf("�����������");
	else printf("�������������");
}