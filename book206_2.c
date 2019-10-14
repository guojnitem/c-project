/*
 * 程序说明：逻辑运算&&，||，！
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

int main()
{
  int age=0;  //年龄
  int hight=0;//身高（cm）
  int sc=0;   //身材（1-火辣，2-普通，3-飞机场）
  int yz=0;   //颜值（1-极好，2-一般，3-丑）
  printf("请输入超女的年龄，身高（cm），身材（1-火辣，2-普通，3-飞机场），颜值（1-极好，2-一般，3-丑）：");
  scanf("%d%d%d%d",&age,&hight,&sc,&yz);
  if(( (age>=18)    && (age<=30)      )&&
     ( (hight>=165) && (hight<=178)   )&&
     ( (sc==1)                        )&& 
     ( (yz==1)                        ))
  {
    printf("恭喜你入选妃子！\n");
    return 0;
  }
  if(( (age>=18)    && (age<=30)      )&&
     ( (hight>=160) && (hight<=165)   )&&
     ( (sc==1)      || (sc==2)        )&& 
     ( (yz==2)                        ))
  {
    printf("恭喜你入选宫女！\n");
    return 0;
  }
  if(( (age>=30)    && (age<=40)      )&&
     ( (hight>=155) && (hight<=165)   )&&
     ( (sc==2)      || (sc==3)        )&& 
     ( (yz==2)                        ))
  {
    printf("恭喜你入选杂役！\n");
    return 0;
  }
  printf("不合格，领盒饭回家！\n");
  return 0;
}
