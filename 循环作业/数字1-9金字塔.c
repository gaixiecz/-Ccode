#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
main()
{
    int i, j, k, n = 9;
    for (i = 1; i <= n; i++)  //控制金字塔的行数，如果需要指定行数，只需要添加一个scanf定义n的值
    {
        for (k = 0; k <= 8 - i; k++) printf(" "); //控制空格数
        for (j = 1; j <=2 * i - 1; j++)   //控制金字塔每行的字符数
        {
            printf("%d", i);
        }
        printf("\n");

    }
}