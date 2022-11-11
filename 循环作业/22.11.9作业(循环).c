#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "math.h"
main()
{
	//百钱百鸡问题
	/*
	int gj = 0, mj = 0, xj = 0; //公鸡5元1只，母鸡3元1只，小鸡1元三只
	for (gj = 0; gj < 20;gj++)
		for (mj = 0; mj < 33; mj++)
			for (xj = 0; xj < 100; xj++)
				if (gj + mj + xj == 100 && gj * 15 + mj * 9 + xj == 300)
					printf("公鸡%d只,母鸡%d只,小鸡%d只\n", gj, mj, xj);
					*/

   /*求100 - 1000之间所有的完数，一个数如果恰好等于他的因子之和，这个数就称为“完数”，例如6 = 1 + 2 + 3
	int i, j, s;
	for (i = 100; i <= 1000; i++)
	{
		s = 0;
		for (j = 1; j <= i / 2; j++)
			if (i % j == 0)
			{
				s = s + j;    //这个时候j就是因子
				continue;

			}

		if (s == i) printf("%d\n", i);
	}
	*/


		/*求出键盘上输入的十个正数之和
		int a, s = 0,i;

		for (i = 0; i < 10; i++)
		{
			scanf("%d", &a);
			if (a <= 0)
			{
				i--;    //如果输入的值大于0，i自减一次，循环就要多走一次
				continue;
			}
			s += a;
		}
		printf("%d", s);
		*/

	//在屏幕上显示九九乘法表
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%-3d", j, i, i * j);
		printf("\n");
	}

}

    








