#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 120");
	while (1)
	{
		printf("你的电脑将在两分钟后关机，请输入我是猪\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}


	}

}