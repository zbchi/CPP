#include<stdio.h>
#define basic 10.00
#define beyondmultiple 1.5

int main()
{
    printf("请输入一周的工作时间：");
    float h;scanf("%f",&h);
    float total=h*basic;
    if(h>40)
    {
        total=((h-40)*beyondmultiple+40)*basic;
    }
    float shui;
    if(total<=300)
    {
        shui=total*0.15;
    }
    else if(total>300&&total<=450)
    {
        shui=300*0.15+(total-300)*0.20;
    }
    else
    {
        shui=300*0.15+150*0.20+(total-450)*0.25;
    }
    printf("工资总额：%f\n",total);
    printf("税金:%f\n",shui);
    printf("净收入：%f\n",total-shui);



    return 0;
}