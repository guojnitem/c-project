/*
 * 程序说明：用数组计算10位学生的平均成绩
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  double score[10];
  double sum=0;
  int i;
  memset(score,0,sizeof(score));
  for(i=0;i<10;i++)
  {
    printf("请输入第%d位学生的成绩：",i+1);
    scanf("%lf",&score[i]);
    sum=sum+score[i];
  }
  printf("这个班的平均成绩为%lf\n",sum/10);
}
