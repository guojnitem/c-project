/*
 *  程序说明：重写POW函数，实现求一个数的n次幂
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

long POW (const int x, const int y);

void main()
{
  int x=0,y=0;
  printf("求x^y(暂不支持y为负数)，请输入x和y的值：");
  scanf("%d %d",&x,&y);
  printf("%d^%d=%ld\n",x,y,POW(x,y));
}
//实现求一个数的n次幂，暂不支持y为负数
long POW (const int x, const int y)
{
  int i=0;
  long res=1;
  for(i=0;i<y;i++)
  {
    res=res*x;
  }
  return res;
}
