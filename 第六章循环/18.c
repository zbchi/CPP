#include<stdio.h>
int main()
{
    const int dunbar=150;
    int start=5;
    int count=0;
    while(start<=dunbar)
    {
        start=(start-1)*2;
        count++;
        printf("第%d周的朋友数量：%d\n",count,start);
    }
    return 0;
}