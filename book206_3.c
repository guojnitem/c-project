/*
 * 程序说明：switch演示
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  int money=0;
  printf("请输入1-12的数字：");
  scanf("%d",&money);
  switch(money)
  {
    case  1:printf("January\n");  break;
    case  2:printf("February\n"); break;
    case  3:printf("March\n");    break;
    case  4:printf("April\n");    break;
    case  5:printf("May\n");      break;
    case  6:printf("June\n");     break;
    case  7:printf("July\n");     break;
    case  8:printf("August\n");   break;
    case  9:printf("September\n");break;
    case 10:printf("October\n");  break;
    case 11:printf("November\n"); break;
    case 12:printf("December\n"); break;
    default:printf("Input error!\n");
  }
}
