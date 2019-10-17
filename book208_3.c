/*
 * 程序说明：计算字符串长度,并倒叙输出每个字符
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  int len=0;
  char s1[100];
  memset(s1,0,sizeof(s1));
  printf("请输入一个字符串：");
  scanf("%s",s1);

  while(s1[len]!='\0')
  {
    len++;
  }
  printf("\n输入字符串的长度为：%d\n",len);
  while(len>=0)
  {
    printf(" %c ",s1[--len]);
  }
  printf("\n");
}
