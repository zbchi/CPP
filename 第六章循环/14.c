#include<stdio.h>
int main()
{
    printf("请输入数组：");
    double a[8];double b[8];
    for(int i=0;i<8;i++)
    {
        scanf("%lf",&a[i]);
    }
    b[0]=a[0];
    for(int i=1;i<8;i++)
    {
        b[i]=b[i-1]+a[i];
    }
    for(int i=0;i<8;i++)
    {
        printf("%lf\t",a[i]);
    }
    printf("\n");
    for(int i=0;i<8;i++)
    {
        printf("%lf\t",b[i]);
    }

    return 0;
}