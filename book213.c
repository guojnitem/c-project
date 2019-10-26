/*
 *  程序说明：重写字符转换函数
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ISALPHA(int ch);//若ch是('A'-'Z','a'-'z')返回非0值，否则返回0
int ISALNUM(int ch);//若ch是字母或数字，返回非0值，否则返回0
int ISDIGIT(int ch);//若ch是('0'-'9')返回非0值，否则返回0
int ISLOWER(int ch);//若ch是小写字母('a'-'z')返回非0值，否则返回0
int ISUPPER(int ch);//若ch是大写字母('A'-'Z')返回非0值，否则返回0
int TOLOWER(int ch);//若ch是大写字母('A'-'Z')返回对应小写字母,其他字符不变
int TOUPPER(int ch);//若ch是小写字母('a'-'z')返回对应大写字母,其他字符不变
int ctoi(int ch);   //将数字字符转化为对应int，其他字符不变

void main()
{
  int c='0';

  printf("请输入一个字符：");
  scanf("%c",&c);

  printf("是否字母：%d\n",ISALPHA(c));
  printf("是否字母或数字：%d\n",ISALNUM(c));
  printf("是否数字：%d\n",ISDIGIT(c));
  printf("转为数字：%d,加1为：%d\n",ctoi(c),ctoi(c)+1);
  printf("是否小写字母：%d\n",ISLOWER(c));
  printf("是否大写字母：%d\n",ISUPPER(c));
  printf("转大写字母：%d - %c\n",c,TOLOWER(c));
  printf("转小写字母：%d - %c\n",c,TOUPPER(c));
  
}
int ISALPHA(int ch)//若ch是('A'-'Z','a'-'z')返回非0值，否则返回0
{
  if(ch>='a'&&ch<='z'  ||  ch>='A'&&ch<='Z') return 1;
  return 0;
}

int ISALNUM(int ch)//若ch是字母或数字，返回非0值，否则返回0
{
  if(ch>='a'&&ch<='z'  ||  ch>='A'&&ch<='Z'  ||  ch>='0'&&ch<='9')   
     return 1;
  return 0;
}

int ISDIGIT(int ch)//若ch是('0'-'9')返回非0值，否则返回0
{
  if(ch>='0'&&ch<='9')   
     return 1;
  return 0;
}

int ISLOWER(int ch)//若ch是小写字母('a'-'z')返回非0值，否则返回0
{ 
  if(ch>='a'&&ch<='z')   
     return 1;
  return 0;
}

int ISUPPER(int ch)//若ch是大写字母('A'-'Z')返回非0值，否则返回0
{
  if(ch>='A'&&ch<='Z')   
     return 1;
  return 0;
}

int TOLOWER(int ch)//若ch是大写字母('A'-'Z')返回对应小写字母,其他字符不变
{
  if(ch>='A'&&ch<='Z')   
     return ch+32;
  return ch;
}

int TOUPPER(int ch)//若ch是小写字母('a'-'z')返回对应大写字母,其他字符不变
{
  if(ch>='a'&&ch<='z')   
     return ch-32;
  return ch;
}

int ctoi(int ch)   //将数字字符转化为对应int，其他字符不变
{
  if((ch>='0')  &&  (ch<='9'))
    return ch-'0';
  return ch;
}
