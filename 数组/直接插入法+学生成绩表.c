#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include <stdlib.h>
#define N  3  //�������ƿγ���
#define M  4 //��������ѧ����
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
		printf("ѧ��%d�ĳɼ�Ϊ",i);
		for (j = 0; j < N; j++)

			printf("%d ", a[i][j]);
	}
	printf("��������Ҫ����Ŀγ̺�(0  -  N-1)");
	scanf("%d", &k);
	for (i = 0; i < M; i++)
		b[i] = a[i][k];
	printf("�ÿγ̵ĳɼ�Ϊ:");
	for (i = 0; i < M; i++)
	{
		printf("%d ", b[i]);
		if (b[i] > 60) sum++;
	}
	printf("\n");
	printf("�ÿγ̼�������Ϊ:%d", sum);
	printf("\n");
	printf("���������Ϊ");
	sort(b);
	for (i = 0; i < M; i++)
		printf("%d ", b[i]);
	



	






}