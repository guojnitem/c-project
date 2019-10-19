/*
 *  程序说明：函数声明和定义
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include"pub.h"

void main()
{
  int x=0,y=0;
  
  printf("请输入两个整数：");
  scanf("%d %d",&x,&y);

  printf("%d和%d相比，%d更大！\n",x,y,max(x,y));
  printf("%d和%d相比，%d更小！\n",x,y,min(x,y));
  
}
