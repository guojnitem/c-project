/*
 * 程序说明：循环里的continue和break演示
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>


void main()
{
  int num=0;
  int sum=0;
  int time=0;
  while(1)
  {
    printf("请输入一个数字(0-退出)：");
    scanf("%d",&num);
    if(num>100)
      continue;
    if(num>0&&num<=100)
    {
      sum=sum+num;
      time++;
    }
    if(num==0)
      break;
  }
  printf("有效数字共计%d个，总和：%d \n",time,sum);
}
