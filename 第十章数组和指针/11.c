#include<stdio.h>
void print(int a,int b,int arr[a][b])
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        printf("%d ",arr[i][j]);
    }
}

void doubled(int a,int b,int arr[a][b])
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        arr[i][j]*=2;
    }
}
int main()
{
    int arr[3][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    doubled(3,5,arr);
    print(3,5,arr);

    return 0;
}