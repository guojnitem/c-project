/*
 *  程序说明：浮点数库函数使用测试
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void main()
{
  /*
  double dd=0;
  printf("请输入一个double数据：");
  scanf("%lf",&dd);
  */
  
  char d[21];
  double ip=0;
  double di=0;
  memset(d,0,sizeof(d));
  printf("请输入一个double字符串：");
  scanf("%s",d);
  
  double dd=atof(d);
  printf("转为double为：%lf\n",dd);
  printf("绝对值为：%lf\n",fabs(dd));
  printf("四舍五入为：%lf\n",round(dd));
  printf("向上取整为：%lf\n",ceil(dd));
  printf("向下取整为：%lf\n",floor(dd));
  printf("1.78和0.2整除后的余数为：%lf\n",fmod(1.78,0.2));
  printf("2^1.5=%lf\n",pow(2,1.5));
  di=modf(dd,&ip);
  printf("小数部分为：%lf，整数部分为：%lf\n",di,ip);
  printf("科学计数法表示：%e\n",dd);
}
