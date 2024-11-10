#include<stdio.h>

int main()
{
    const double litter=3.785;
    const double km=1.609;
    double licheng;double xiaohao;
    printf("输入里程：");scanf("%lf",&licheng);
    printf("输入耗油量：");scanf("%lf",&xiaohao);
    printf("升/100公里：%lf\n",litter*xiaohao*100/(km*licheng));
    printf("公里/升：%lf\n",licheng*km/(litter*xiaohao));

    return 0;
}