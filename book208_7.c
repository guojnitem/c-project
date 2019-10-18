/*
 * 程序说明：三维数组，某学校有两个年级，每个年级三个班，
 * 每个班有4名学生,输入成绩后，输出班，年级，全校平均成绩。
 * 作者：guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  double score[2][3][4];
  double sum[3];      //sum[0]-全校，sum[1]-年级，sum[2]-班级
  int i,j,k;
  memset(score,0,sizeof(score));
  memset(sum,0,sizeof(sum));
  sum[0]=0;
  for(i=0;i<2;i++)
  {
    sum[1]=0;
    for(j=0;j<3;j++)
    {
      sum[2]=0;
      for(k=0;k<4;k++)
      {
	printf("请输入%d年级%d班%d号学生的分数：",i+1,j+1,k+1);
	scanf("%lf",&score[i][j][k]);	
	sum[2]=sum[2]+score[i][j][k];
      }
      printf("%d年级%d班平均分为：%lf\n",i+1,j+1,sum[2]/4);
      sum[1]=sum[1]+sum[2];
    }
    sum[0]=sum[0]+sum[1];
    printf("%d年级平均分为：%lf\n",i+1,sum[1]/12); //3*4
  }
  printf("全校平均分为:%lf\n",sum[0]/24);  //2*3*4
}
