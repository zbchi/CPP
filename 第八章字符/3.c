#include<stdio.h>
#include<ctype.h>
int main()
{
    int ch;
    int big=0;
    int small=0;
    while((ch=getchar())!=EOF)
    {
        if(isupper(ch))big++;
        if(islower(ch))small++;


    }
    printf("大写：%d\n",big);
    printf("小写：%d\n",small);


    return 0;
}