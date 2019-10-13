/*
 * 程序说明：if演示
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  int age=0;
  printf("请输入你的年龄：");
  scanf("%d",&age);
  if(age<0)
    printf("年龄非法！\n");
  else if(age<=6)
    printf("你现在在读幼儿园或学龄前！\n");
  else if(age<=12)
    printf("你现在在读小学！\n");
  else if(age<=15)
    printf("你现在在读初中！\n");
  else if(age<=18)
    printf("你现在在读高中！\n");
  else if(age>18)
    printf("你现在在读大学或已开始工作！\n");
}
