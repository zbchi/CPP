#include<stdio.h>
int main()
{
    FILE*fp;
    char ch;
    int count=0;
    
    fp=fopen("ceshi.txt","r");
    if(fp==NULL)
    {
        perror("fopen");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF)
    {
        count++;
    }
    fclose(fp);
    printf("字符数为：%d",count);
    return 0;
}