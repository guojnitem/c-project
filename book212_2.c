/*
 *  程序说明：输入一个字符串，然后用atoi函数转换int并+100后输出
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main()
{
  char str[20];
  memset(str,0,sizeof(str));
  printf("请输入一个数字字符串：");
  scanf("%s",str);
  
  printf("str转换为int+100后为：%d\n",atoi(str)+100);
}
