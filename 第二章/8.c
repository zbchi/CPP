#include<stdio.h>
void one_three()
{
     printf("one\n");
}
void two()
{
    printf("two\n");
    printf("three\n");
}
int main()
{
    printf("starting now:\n");
    one_three();
    two();
    printf("done!");
    return 0;
}