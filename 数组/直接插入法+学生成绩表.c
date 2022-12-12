#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include <stdlib.h>
#define N  3  //用来控制课程数
#define M  4 //用来控制学生数
void sort(int a[])
{
	int i,j,t;
	for (i = 1; i < M; i++)
	{
		t = a[i];
		j = i - 1;
		while (j >= 0 && t>a[j])
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j+1] = t;
	}
}
main()
{
	int a[M][N], b[M], sum = 0;
	int i,j,k;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			/*scanf("%d", &a[i][j]);*/
			a[i][j] = rand() % 40 + 60;
	}
	for (i = 0; i < M; i++)
	{
		printf("\n");
		printf("学生%d的成绩为",i);
		for (j = 0; j < N; j++)

			printf("%d ", a[i][j]);
	}
	printf("请输入您要排序的课程号(0  -  N-1)");
	scanf("%d", &k);
	for (i = 0; i < M; i++)
		b[i] = a[i][k];
	printf("该课程的成绩为:");
	for (i = 0; i < M; i++)
	{
		printf("%d ", b[i]);
		if (b[i] > 60) sum++;
	}
	printf("\n");
	printf("该课程及格人数为:%d", sum);
	printf("\n");
	printf("降序排序后为");
	sort(b);
	for (i = 0; i < M; i++)
		printf("%d ", b[i]);
	



	






}