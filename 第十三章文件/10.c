#include<stdio.h>
int main()
{
    //读取文件并打开文件
    char filename[100];
    printf("请输入文件名：");
    scanf("%s",filename);
    FILE*fp=fopen(filename,"r");
    if(fp==NULL)
    {
        perror("fopen");
        return 1;
    }

    //读取文件位置并打印内容
    int position;
    while(1)
    {
        printf("请输入文件位置（行号，从0开始，输入负数和非数字推出）:");
        if(scanf("%d",&position)!=1||position<0)
        break;
        fseek(fp,0,SEEK_SET);// 重置文件指针的位置
        char line[1000];
        int currentposition=0;
        while(fgets(line,sizeof(line),fp)!=NULL)
        {
            if(currentposition==position)
            {
                printf("%s\n",line);
                break;
            }
            currentposition++;
        }

    }

    return 0;
}