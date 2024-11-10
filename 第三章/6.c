#include<stdio.h>
int main()
{
    int k=950;
    double shui=3.0e-23;
    printf("请输入水的夸脱数：");
    int n;scanf("%d",&n);
    printf("水分子的数量：%.0lf",n*k/shui);
    return 0;
}