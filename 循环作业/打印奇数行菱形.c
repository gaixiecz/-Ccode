#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
main()
{
    int i, j, k, n = 0,t,f;
    printf("请输入你要打印的奇数行数");
   
    while (scanf("%d", &n), n % 2 == 1)
    {
      
        for (i = 0; i < n; i++)
        {
            for (k = 0; k < n - i; k++) printf(" ");
            for (j = 0; j < 2 * i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
            if (i >= n / 2) break;  //第一个for是打印前半段菱形，到这里要跳出；

        }


        for (j = i ; j > 0; j--)    //打印后半段菱形
        {
            for (k = 0; k < n - j +1; k++) printf(" ");
            for (t = 0; t < 2 * j - 1; t++)
                printf("*");
            printf("\n");
        }
        
    }
    if (n % 2 == 0)
    {
        printf("输入的是偶数,请输入奇数");
     
      
    }
}

