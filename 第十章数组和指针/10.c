#include<stdio.h>
void sum(int*arr1,int*arr2,int*arr3,int n)
{
    for(int i=0;i<n;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }
}
int main()
{
    int arr1[10]={34,45,2,5,6,7,7,5,4,2};
    int arr2[10]={3,2,5,5,2,1,6,8,9,0};
    int arr3[10];
    int n=sizeof(arr1)/sizeof(int);
    sum(arr1,arr2,arr3,n);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr3[i]);
    }

    return 0;
}