/*
 * 程序说明：输入输出演示
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

int main()
{
  int age=21;
  int hight=162;
  int flag=0;
  char name[21];
  char love[41];
  memset(name,0,sizeof(love));
  strcpy(love,"深爱何须多言！"); 
  memset(name,0,sizeof(name));
  strcpy(name,"hudie");
  printf("请输入她的名字:");
  scanf("%s",name);
  printf("确认请按1:");
  scanf("%d",&flag);
  if(flag==1&&strcmp(name,"hudie")==0)
    printf("%s\n",love);
  else
    printf("加油！\n");
}
