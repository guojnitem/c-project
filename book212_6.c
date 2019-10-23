/*
 *  程序说明：测试字符转数字
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"pub.h"

void main()
{
  char c;
  printf("请输入一个数字字符：");
  scanf("%c",&c);
  printf("字符的对应数字为：%d\n",ctoi(c));
  printf("字符的对应数字+1为：%d\n",ctoi(c)+1);
}
