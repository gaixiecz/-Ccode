#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdio.h"
#define N 100
#define M 100
main()
{
	int a[N][M], i, j, b[N], c[M], n, m, max, maxi=0,maxj=0;
	int d[N], t = 0;//��¼�ɼ�������ѧ����ѧ����
	int e[N];//��¼�ɼ�������ѧ���Ĵ���
	double avg, sum = 0;
	printf("������ѧ������n(0-100)�Ϳγ���m(0-10):\n");
	scanf("%d%d", &n, &m);
	printf("����������%dλѧ����ѧ����", n);
	for (i = 0; i < n; i++) scanf("%d", &b[i]);
	printf("����������%d���γ̵Ŀγ̺�", m);
	for (i = 0; i < m; i++) scanf("%d", &c[i]);
	printf("����������%dλѧ����%d���γ̳ɼ�", n, m);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			sum += a[i][j];
	}
	avg = sum / (n * m);
	printf("ȫ��ѧ��ȫ���γ̵���ƽ���ɼ�Ϊ%f", avg);
	max = a[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			if (a[i][j] > max) {
				max = a[i][j];
				maxi = i;
				maxj = j;
			}
	}
	printf("�ɼ���ߵ�ѧ����Ϊ%d,�ɼ���ߵĿγ̺�Ϊ%d\n", b[maxi], c[maxj]);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			if (a[i][j] < 60)
			{
				d[t] = c[i];
				e[t] = i;
				t++;
			}
	}

	for (i = 0; i < n; i++)
	{
		printf("ѧ����%d��ѧ���в�����ɼ�,����Ƴɼ�����:\n", d[i]);
		for (j = 0; j < m; j++)
			printf("%d\n", a[e[i]][j]);
	}

}
