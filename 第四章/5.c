#include<stdio.h>
int main()
{
    float sudu;float daxiao;
    printf("下载速度(Mb/s):");scanf("%f",&sudu);
    printf("文件大小(MB):");scanf("%f",&daxiao);
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.",sudu,daxiao,daxiao*8/sudu);

    return 0;
}