#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "math.h"
main()
{
	//��Ǯ�ټ�����
	/*
	int gj = 0, mj = 0, xj = 0; //����5Ԫ1ֻ��ĸ��3Ԫ1ֻ��С��1Ԫ��ֻ
	for (gj = 0; gj < 20;gj++)
		for (mj = 0; mj < 33; mj++)
			for (xj = 0; xj < 100; xj++)
				if (gj + mj + xj == 100 && gj * 15 + mj * 9 + xj == 300)
					printf("����%dֻ,ĸ��%dֻ,С��%dֻ\n", gj, mj, xj);
					*/

   /*��100 - 1000֮�����е�������һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6 = 1 + 2 + 3
	int i, j, s;
	for (i = 100; i <= 1000; i++)
	{
		s = 0;
		for (j = 1; j <= i / 2; j++)
			if (i % j == 0)
			{
				s = s + j;    //���ʱ��j��������
				continue;

			}

		if (s == i) printf("%d\n", i);
	}
	*/


		/*��������������ʮ������֮��
		int a, s = 0,i;

		for (i = 0; i < 10; i++)
		{
			scanf("%d", &a);
			if (a <= 0)
			{
				i--;    //��������ֵ����0��i�Լ�һ�Σ�ѭ����Ҫ����һ��
				continue;
			}
			s += a;
		}
		printf("%d", s);
		*/

	//����Ļ����ʾ�žų˷���
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%-3d", j, i, i * j);
		printf("\n");
	}

}

    








