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
		printf("��ĵ��Խ��������Ӻ�ػ���������������\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}


	}

}