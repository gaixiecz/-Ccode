#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
main()
{
    int i, j, k, n = 9;
    for (i = 1; i <= n; i++)  //���ƽ������������������Ҫָ��������ֻ��Ҫ���һ��scanf����n��ֵ
    {
        for (k = 0; k <= 8 - i; k++) printf(" "); //���ƿո���
        for (j = 1; j <=2 * i - 1; j++)   //���ƽ�����ÿ�е��ַ���
        {
            printf("%d", i);
        }
        printf("\n");

    }
}