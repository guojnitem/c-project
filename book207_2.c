/*
 * 程序说明：累计输入数据，总和大于5000退出循环
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
    printf("请输入一个数字：");
    scanf("%d",&num);
    sum=sum+num;
    time++;
    if(sum>=5000)
      break;
  }
  printf("sum=%d,共输入%d次。\n",sum,time);
}
