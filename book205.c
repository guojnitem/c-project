/*
 * 程序说明：演示运算符
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

int main()
{
  int num1,num2;
  num1=num2=0;
  printf("请输入两个整数：");
  scanf("%d %d",&num1,&num2);
  printf("sizeof int:%d\n",sizeof num1);
  printf("两个数相加：%d\n",num1+num2);
  printf("两个数相减：%d\n",num1-num2);
  printf("两个数相乘：%d\n",num1*num2);
  printf("两个数相除：%lf\n",(double)num1/num2);
  printf("两个数取余：%d\n",num1%num2);
}
