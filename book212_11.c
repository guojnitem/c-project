/*
 *  程序说明：编写一个扑克发牌程序，除了大小王，将52张花牌，随机洗牌
 *  	      发给4个人相对应的牌
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
  int array[52];
  int player[4][13];
  int i=0;
  int j=0;
  int tem=0;
  int flag=0;
  memset(array,0,sizeof(array));
  memset(player,0,sizeof(player));
//产生一个52个数据的随机数列
  printf("开始洗牌！\n");
  srand(time(0));
  for(i=0;i<52;)
  {
    flag=0;
    tem=rand()%52+1;
    for(j=0;j<i;j++)
    {
      if(tem==array[j])
        flag=1;
    }
    if(flag==1) 
      continue;
    array[i++]=tem;
  }
  printf("开始发牌！\n");
//给玩家发牌
  /*  第一种发牌方式,每人直接发连续的13张
  for(i=0;i<4;i++)
  {
    for(j=0;j<13;j++)
    {
      player[i][j]=array[i*13+j];
    }
  }
  */
  //第一种发牌方式，每人取一张
  for(i=0;i<13;i++)
  {
    player[0][i]=array[i*4+0];
    player[1][i]=array[i*4+1];
    player[2][i]=array[i*4+2];
    player[3][i]=array[i*4+3];
  }
//输出4位玩家的牌
  for(i=0;i<4;i++)
  {
    printf("第%d位玩家的牌为：",i+1);
    for(j=0;j<13;j++)
    {
      printf(" %02d",player[i][j]);
    }
    printf("\n");
  }
}
