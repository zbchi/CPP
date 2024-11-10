#include<stdio.h>
int main()
{
    FILE*fp=fopen("ceshi.txt","w");
    fprintf(fp,"hello world\nzhong hai ling\nyimeng\nworld\nhai ling");
    fclose(fp);
    return 0;


}