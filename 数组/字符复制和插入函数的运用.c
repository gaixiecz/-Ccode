#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "string.h"
main()
{
	char s1[10] = "abcdef", s2[10] = "123456";
	char s3[20];
	strcpy(s3, s1);  //��s1�����ݸ��Ƶ�s3
	strcat(s3, s2); //��s2��������ӵ�s3�ĺ���
	puts(s3);    //puts��������ַ���,���s3


}