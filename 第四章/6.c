#include<stdio.h>
#include<string.h>
int main()
{
    char first[50];
    char last[50];
    printf("请输入名：");
    scanf("%s",first);
    printf("请输入姓：");
    scanf("%s",last);
    printf("%s %s\n",first,last);
    printf("%*lu %*lu",(int)strlen(first),strlen(first),(int)strlen(last),strlen(last));
    return 0;
}