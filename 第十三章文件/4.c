#include<stdio.h>
int main(int argc,char *argv[])
{
    if(argc<2)
    {
        printf("输入文件名");
        return 1;
    }
    for(int i=0;i<argc-1;i++)
    {
        printf("%s\n",argv[i+1]);
    }
    return 0;
}