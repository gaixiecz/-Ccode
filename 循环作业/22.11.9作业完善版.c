#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
main()
{
	//百钱百鸡问题
	
	/*int gj = 0, mj = 0, xj = 0; //公鸡5元1只，母鸡3元1只，小鸡1元三只
	while(gj<=20)
	{
		mj = 0;
		while (mj <= 33)
		{	
			xj = 100 - gj - mj; //求出小鸡的个数
			if(gj+xj+mj==100&&gj*5+mj*3+xj/3==100&&xj%3==0)  //xj%3==0可以确保小鸡的个数为整数
				printf("公鸡%d只,母鸡%d只,小鸡%d只\n", gj, mj, xj);
			mj++;	
		}
		gj++; 
	}
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
			}

		if (s == i) printf("%d\n", i);
	}
	*/


		//求出键盘上输入的十个数中正数的和
	/*int a, s = 0, i;
		for (i = 0; i<10; i++)
		{
			scanf("%d", &a);
			if (a<= 0) {
				continue;
				
			}
			s += a;
			
		}
		printf("%d", s);*/
		

	//在屏幕上显示九九乘法表
	/*int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%-3d", j, i, i * j);
		printf("\n");

	}  */
}

    








