#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
main()
{
	int j, s=0, k;
	printf("������Ҫ�жϵ���");
	scanf("%d", &j);
	k = j;
	while (k != 0)
	{
		s = s * 10 + k % 10;
		k /= 10;
	}
	if (j == s) printf("������ǻ�����");
	else printf("��������ǻ�����");
}
      