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
		printf("��ӭʹ�ñ�ϵͳ\n");
		printf("����1 ȡ��\n");
		printf("����2 ���\n");
		printf("����3 ��ѯ�ܶ�\n");
		printf("�����������˳���ϵͳ\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:qk(); break;
		case 2:ck(); break;
		case 3:cx(); break;
		default:m = 1, printf("�˳�ϵͳ�ɹ�,��ӭ���ٴ�ʹ��");
		}	
	}
}
	void qk()
	{
		int m;
		printf("��������Ҫȡ��Ľ��:");
		scanf("%d", &m);
		money = money - m;
		if (money < 0) {
			printf("��������");
			money = money+m;
		}
		else printf("ȡ��ɹ�������ʣ�����Ϊ%d\n",money);
	}
	void ck()
	{
		int m;
		printf("��������Ҫ���Ľ��:");
		scanf("%d", &m);
		money = money + m;
		printf("���ɹ�,��Ŀǰ�����Ϊ%d\n", money);
		
	}
	void cx()
	{
		printf("��Ŀǰ�����Ϊ%d\n", money);
		
	}
