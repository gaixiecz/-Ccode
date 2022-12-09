#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdio.h"
#define N 100
#define M 100
main()
{
	int a[N][M], i, j, b[N], c[M], n, m, max, maxi=0,maxj=0;
	int d[N], t = 0;//记录成绩不及格学生的学生号
	int e[N];//记录成绩不及格学生的次序
	double avg, sum = 0;
	printf("请输入学生人数n(0-100)和课程数m(0-10):\n");
	scanf("%d%d", &n, &m);
	printf("请依次输入%d位学生的学生号", n);
	for (i = 0; i < n; i++) scanf("%d", &b[i]);
	printf("请依次输入%d个课程的课程号", m);
	for (i = 0; i < m; i++) scanf("%d", &c[i]);
	printf("请依次输入%d位学生的%d个课程成绩", n, m);
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
	printf("全部学生全部课程的总平均成绩为%f", avg);
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
	printf("成绩最高的学生号为%d,成绩最高的课程号为%d\n", b[maxi], c[maxj]);
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
		printf("学生号%d的学生有不及格成绩,其各科成绩如下:\n", d[i]);
		for (j = 0; j < m; j++)
			printf("%d\n", a[e[i]][j]);
	}

}
