/*
 * 程序说明：演示数据类型
 * 作者：guojn
*/

#include<stdio.h>
#include<string.h>

int main()
{
  char name[21];
  int age;
  int day;
  double time;
  memset(name,0,sizeof(name));	//初始化
  strcpy(name,"guojn");
  age= 21;
  day= 20;
  time=100.20;
  printf("用户%s,年龄%d,学习c语言第%d天，共%.2lf小时！\n",name,age,day,time);
  //printf("=%d=\n",sizeof(short));
  //printf("=%d=\n",sizeof(int));
  //printf("=%d=\n",sizeof(long));
  //printf("=%d=\n",sizeof(long long));
}
