/*
 *  程序说明：double测试
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void main()
{
  double dd12=1234567890.99;  //测试12位double
  printf("dd12=%lf\n",dd12);
  if(dd12==1234567890.99)
    printf("dd12==1234567890.99\n\n");

  double dd13=12345678909.99;  //测试13位double
  printf("dd13=%lf\n",dd13);
  if(dd13==12345678909.99)
    printf("dd13==12345678909.99\n\n");

  double dd14=123456789099.99;  //测试14位double
  printf("dd14=%lf\n",dd14);
  if(dd14==123456789099.99)
    printf("dd14==123456789099.99\n\n");

  double dd15=1234567890999.99;  //测试15位double
  printf("dd15=%lf\n",dd15);
  if(dd12==1234567890999.99)
    printf("dd15==1234567890999.99\n\n");

  double dd16=12345678909999.99;  //测试16位double
  printf("dd16=%lf\n",dd16);
  if(dd16==12345678909999.99)
    printf("dd16==12345678909999.99\n\n");

  double dd17=123456789099999.99;  //测试17位double
  printf("dd17=%lf\n",dd17);
  if(dd17==123456789099999.99)
    printf("dd17==123456789099999.99\n\n");

  double dd18=1234567890999999.99;  //测试18位double
  printf("dd18=%lf\n",dd18);
  if(dd18==1234567890999999.99)
    printf("dd18==1234567890999999.99\n\n");

  double dd19=12345678909999999.99;  //测试19位double
  printf("dd19=%lf\n",dd19);
  if(dd19==12345678909999999.99)
    printf("dd19==12345678909999999.99\n\n");

}
