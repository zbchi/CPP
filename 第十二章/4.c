#include<stdio.h>
int count(void)
{
    static int count=0;
    count++;
    return count;
}
int main()
{
    for(int i=0;i<15;i++)
    {
        printf("%d  ",count());
    }
    
    return 0;
}