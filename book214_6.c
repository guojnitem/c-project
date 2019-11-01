/*
 *  程序说明：重写浮点数常用库函数
 *  作者：guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

double FABS(const double x);  //double数据求绝对值
double ROUND(const double x);  //double数据四舍五入
double CEIL(const double x);  //double数据向上取整
double FLOOR(const double x);  //double数据向下取整
double MODF(double val,double *ip);  
//double数据分解为小数和整数，整数存放在ip变量中，返回小数的值

void main()
{
  double dd=0;
  double di=0;
  double ip=0;
  printf("请输入一个double数据：");
  scanf("%lf",&dd);
  printf("dd绝对值为：%lf\n",FABS(dd));
  printf("dd四舍五入为：%lf\n",ROUND(dd));
  printf("dd向上取整为：%lf\n",CEIL(dd));
  printf("dd向下取整为：%lf\n",FLOOR(dd));
  di=MODF(dd,&ip);
  printf("dd整数部分为:%lf，小数部分为:%lf\n",ip,di);
}

double FABS(const double x)  //double数据求绝对值
{
  if(x>=0)
    return x;
  return 0-x;
}

double ROUND(const double x)  //double数据四舍五入
{
  if(x>=0)
    return (int)(x+0.5);
  else
    return (int)(x-0.5);
  /*
  double di=0;
  di=fmod(x,1.0);
  if(di>=0.5)
    return x-di+1;  
  else
    return x-di;
  */
  
}

double CEIL(const double x)  //double数据向上取整
{
  if(x>=0)
    return (int)x+1;
  else
    return (int)x;
  
  /*
  double di=0;
  di=fmod(x,1.0);
  return x-di+1;
  */
}

double FLOOR(const double x)  //double数据向下取整
{
  if(x>=0)
    return (int)x;
  else
    return (int)x-1;
  /*
  double di=0;
  di=fmod(x,1.0);
  return x-di;
  */
}

//double数据分解为小数和整数，整数存放在ip变量中，返回小数的值
double MODF(double val,double *ip)  
{
  *ip=(int)val;
  return val-*ip;
  /*
  double di=0;
  di=fmod(val,1.0);
  *ip=val-di;
  return di;  
  */
}
