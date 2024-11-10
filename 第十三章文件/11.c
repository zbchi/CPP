#include<stdio.h>
#include<string.h>
int main(int argc,char*argv[])
{
    FILE*fp=fopen(argv[2],"r");
    if(fp==NULL)
    {
        perror("fopen");
        return 1;
    }
    char line[260];
    while(fgets(line,260,fp)!=NULL)
    {
        if(strstr(line,argv[1])!=NULL)
        printf("%s\n",line);
    }
    fclose(fp);
    return 0;
}