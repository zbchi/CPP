#include<stdio.h>
void temperatures(double temp)
{
    const double s=5.0/9.0*(temp-32.0);
    const double k=s+273.16;
    printf("摄氏温度：%f\n",s);
printf("开式温度：%f\n",k);

}
int main()
{
    double temp;
    while(scanf("%lf",&temp)==1)
    {
        temperatures(temp);
    }

    return 0;
}