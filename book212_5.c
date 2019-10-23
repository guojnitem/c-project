/*
 *  程序说明：重写abs和labs函数
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ABS(const int j);
long LABS(const long j);

void main()
{
  int num=0;
  long lnum=0;

  printf("请输入一个int型整数:");
  scanf("%d",&num);
  printf("请输入一个long型整数:");
  scanf("%ld",&lnum);
  
  printf("int数据的绝对值为:%d\n",ABS(num));
  printf("long数据的绝对值为:%ld\n",LABS(lnum));
}
//int数据转绝对值
int ABS(const int j)
{
  if(j>=0)
    return j;
  else
    return 0-j;
}
//long数据转绝对值
long LABS(const long j)
{
  if(j>=0)
    return j;
  else
    return 0-j;
}
