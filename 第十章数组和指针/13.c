#include<stdio.h>
int main()
{
    double arr[3][5];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        scanf("%lf",&arr[i][j]);
    }

    double sum[3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<5;j++)
        {
            sum[i]+=arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("第%d组的平均数为：%.1f\n",i,sum[i]/5);
    }

    double max=arr[0][0];
    double sumsum=arr[0][0];
    for(int i=1;i<15;i++)
    {
        sumsum+=*(&arr[0][0]+i);
        if(*(&arr[0][0]+i)>max)
        {
            max=*(&arr[0][0]+i);
        }
    }

    printf("最大值为：%.1f\n",max);
    printf("平均数为：%.1f\n",sumsum/15);


    return 0;
}
