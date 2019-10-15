/*
 * 程序说明：9*9乘法表
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  int i;
  int j;
  for(i=1;i<=9;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("  %d*%d=%d",i,j,i*j);
    }
    putchar('\n');
  }
}
