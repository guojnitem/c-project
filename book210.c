/*
 *  程序说明：全局变量与局部变量演示
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>

double PI=3.14;

void main()
{
  printf("PI1=%lf\n",PI);
  if(1)
  {
    double PI=3.15;
    printf("PI3=%lf\n",PI);
  }
  printf("PI2=%lf\n",PI);
}
