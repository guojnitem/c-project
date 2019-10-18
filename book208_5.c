/*
 * 程序说明：用二维数组来计算两个班，每班8名学生的，每个班的平均成绩和年级平均成绩
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  double score[2][8];
  double sum[2];
  int i=0;
  int j=0;
  for(i=0;i<2;i++)
  { 
    sum[i]=0;
    for(j=0;j<8;j++)
    {
      printf("请输入%d班第%d位学生的成绩：",i+1,j+1);
      scanf("%lf",&score[i][j]);
      sum[i]=sum[i]+score[i][j];
    }
    printf("%d班的平均成绩为%lf\n",i+1,sum[i]/8);
  }
  printf("年级的平均成绩为%lf\n",i,(sum[0]+sum[1])/16);
}
