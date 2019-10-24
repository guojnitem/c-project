/*
 *  程序说明：输入一个数字字符串，输出其数字加和
 *  例如：输入“"123586"，返回 25
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"pub.h"

int strSum(const char *s);

void main()
{
  char str[21];
  memset(str,0,sizeof(str));
  printf("请输入一个数字字符串：");
  scanf("%s",str);
  printf("该字符串的数字加和为：%d\n",strSum(str));
}

//输入一个数字字符串，输出其数字加和
int strSum(const char *s)
{
  int i=0;
  int sum=0;
  while(s[i]!='\0')
  {
    sum=sum+ctoi(s[i]);
    i++; 
  }
  return sum;
}
