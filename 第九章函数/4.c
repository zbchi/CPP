#include<stdio.h>
double tiaoheaverage(double a,double b)
{
    double daoshu1=1.0/a;
    double daoshu2=1.0/b;
    double average=(daoshu1+daoshu2)/2;
    double result=1.0/average;
    return result;
}
int main()
{
    double a,b;scanf("%lf %lf",&a,&b);
    printf("%lf",tiaoheaverage(a,b));


    return 0;
}