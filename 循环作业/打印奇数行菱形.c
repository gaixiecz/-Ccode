#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
main()
{
    int i, j, k, n = 0,t,f;
    printf("��������Ҫ��ӡ����������");
   
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
            if (i >= n / 2) break;  //��һ��for�Ǵ�ӡǰ������Σ�������Ҫ������

        }


        for (j = i ; j > 0; j--)    //��ӡ��������
        {
            for (k = 0; k < n - j +1; k++) printf(" ");
            for (t = 0; t < 2 * j - 1; t++)
                printf("*");
            printf("\n");
        }
        
    }
    if (n % 2 == 0)
    {
        printf("�������ż��,����������");
     
      
    }
}

