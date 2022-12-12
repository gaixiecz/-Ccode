#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "string.h"
main()
{
	char s1[10] = "abcdef", s2[10] = "123456";
	char s3[20];
	strcpy(s3, s1);  //将s1的内容复制到s3
	strcat(s3, s2); //将s2的内容添加到s3的后面
	puts(s3);    //puts用于输出字符串,输出s3


}