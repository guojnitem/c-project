/*
 * 程序说明：输出0-100之间的偶数
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  int i;
  for(i=1;i<100;i++)
  {
    if(i%2==0)
      printf(" %d ",i);
  }
  printf("\n");
}
