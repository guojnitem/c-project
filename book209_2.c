/*
 *  程序说明：写一个函数根据胸围判断身材
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
int checkSc(const int num);

void main()
{
  int len=0;
  int sc=0;
  printf("请输入一个胸围长度（cm）：");
  scanf("%d",&len);
  sc=checkSc(len);
  /*
  if(sc==0)
    printf("输入非法！\n");
  else
    printf("(1-萝莉，2-正常，3-御姐)她的身材为：%d\n",sc);
  */
  switch(sc)
  {
    case 0: printf("输入非法！\n");       break;
    case 1: printf("她的身材为：萝莉\n"); break;
    case 2: printf("她的身材为：正常\n"); break;
    case 3: printf("她的身材为：御姐\n"); break;
  }
}
//函数：根据胸围（cm）判断身材，0-非法，1-萝莉，2-正常，3-御姐
int checkSc(const int num)
{
  int sc=0;
  if(num<30)
    sc=0;
  if((num>=30)  && (num<60))
    sc=1;
  if((num>=60) && (num<85))
    sc=2;
  if(num>=85)
    sc=3; 
  return sc;
}
