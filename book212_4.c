/*
 *  程序说明：测试各整数类型的超范围情况
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>

void main()
{ 
  short s=65535;
  unsigned short us=65535;
  int i=2100000000;
  unsigned int ui=42000000;
  long l=10000000000000;
  unsigned long ul=2000000000000;  

  printf("short:%hd\n",s);
  printf("unsigned short:%hu\n",us);

  printf("int:%d\n",i);
  printf("unsigned int:%u\n",ui);

  printf("long:%ld\n",l);
  printf("unsigned long:%lu\n",ul);
}
