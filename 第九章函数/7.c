#include<stdio.h>
#include<ctype.h>
int alpha(char a)
{
    if(a>=65&&a<=122)
    return tolower(a)-96;//小写a为97
    else return -1;
}
int main()
{
    char ch;
    while((ch=getchar())!=EOF)
    printf("%d\n",alpha(ch));//不能调用isalpha

    return 0;
}