/*
 *  程序说明：测试浮点数
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main()
{
  float ff2=9.9;          //测试2位浮点数
  printf("2ff=%f\n",ff2);
  if(ff2==9.9) printf("ff==9.9\n");

  float ff3=99.9;          //测试3位浮点数
  printf("3ff=%f\n",ff3);
  if(ff3==99.9) printf("ff==99.9\n");

  float ff4=999.9;          //测试4位浮点数
  printf("4ff=%f\n",ff4);
  if(ff4==999.9) printf("ff==999.9\n");

  float ff5=9999.9;          //测试5位浮点数
  printf("5ff=%f\n",ff5);
  if(ff5==9999.9) printf("ff==9999.9\n");

  float ff6=99999.9;          //测试6位浮点数
  printf("6ff=%f\n",ff6);
  if(ff6==99999.9) printf("ff==99999.9\n");

  float ff7=999999.9;          //测试7位浮点数
  printf("7ff=%f\n",ff7);
  if(ff7==999999.9) printf("ff==999999.9\n");

  float ff8=9999999.9;          //测试8位浮点数
  printf("8ff=%f\n",ff8);
  if(ff8==9999999.9) printf("ff==9999999.9\n");

}
