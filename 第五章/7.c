#include<stdio.h>
void lifang(double n)
{
    printf("%lf",n*n*n);
}
int main()
{
    double n;scanf("%lf",&n);
    lifang(n);
    return 0;
}