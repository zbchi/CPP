#include<stdio.h>
#include<ctype.h>
int myatoi(char*str)
{
    while(*str==' ')
    str++;
    if(*str=='\0')
    return 0;
    while(*str)
    {
        if(!isdigit(*str))return 0;
        str++;
    }

    return 1;
}
int main()
{
    printf("%d\n",myatoi("4353525"));
    printf("%d\n",myatoi("d035"));
    
    return 0;
}