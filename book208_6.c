/*
 * 程序说明：定义一个存放10个字符串的数组，并输入输出
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  char str[10][31];
  int  i=0;
  memset(str,0,sizeof(str));
  for(i=0;i<10;i++)
  {
    printf("请输入第%d个字符串：",i+1);
    scanf("%s",str[i]);
  }
  for(i=0;i<10;i++)
  {
    printf("第%d个字符串为：%s\n",i+1,str[i]);
  }
}
