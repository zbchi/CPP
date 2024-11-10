#include<stdio.h>
int main()
{
    printf("请再输入杯数的:");
    int bei;scanf("%d",&bei);
    printf("品脱：%.1f\n",(float)bei/2.0);
    printf("司：%d\n",bei*8);
    printf("大汤勺：%d\n",bei*16);
    
    return 0;
}