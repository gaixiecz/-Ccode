#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int money=0;
void ck();
void qk();
void cx();
main()
{
	int m = 0, i;
	while (m == 0)
	{
		
		printf("\n");
		printf("欢迎使用本系统\n");
		printf("输入1 取款\n");
		printf("输入2 存款\n");
		printf("输入3 查询总额\n");
		printf("输入有误则退出本系统\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:qk(); break;
		case 2:ck(); break;
		case 3:cx(); break;
		default:m = 1, printf("退出系统成功,欢迎您再次使用");
		}	
	}
}
	void qk()
	{
		int m;
		printf("请输入你要取款的金额:");
		scanf("%d", &m);
		money = money - m;
		if (money < 0) {
			printf("您的余额不足");
			money = money+m;
		}
		else printf("取款成功，您的剩余余额为%d\n",money);
	}
	void ck()
	{
		int m;
		printf("请输入你要存款的金额:");
		scanf("%d", &m);
		money = money + m;
		printf("存款成功,您目前的余额为%d\n", money);
		
	}
	void cx()
	{
		printf("您目前的余额为%d\n", money);
		
	}
