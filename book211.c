/*
 *  程序说明：指针演示
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>

void main()
{
  int i;
  double d;
  char c;
  int array[10];

  memset(array,0,sizeof(array));
  
  int *pi;
  double *pd;
  char *pc;
  
  pi=&i;
  pd=&d;
  pc=&c;
  
  printf("i的值为：%d,地址为：%p\n",i,pi);
  printf("d的值为：%lf,地址为：%p\n",d,pd);
  printf("c的值为：%c,地址为：%p\n\n",c,pc);
  
  *pd=3.14;
  *pi=10;
  *pc='A';

  printf("i的值为：%d,地址为：%p\n",i,pi);
  printf("d的值为：%lf,地址为：%p\n",d,pd);
  printf("c的值为：%c,地址为：%p\n\n",c,pc);

  //加一个数组测试一下
  printf("array的值为：%p\n",array);
  printf("&array的值为：%p\n",&array);
  printf("&array[0]的值为：%p\n",&array[0]);
}
