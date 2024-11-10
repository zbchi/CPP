#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    srand(time(NULL));
    int randomnumbers[101];
    for(int i=0;i<100;i++)
    {
        randomnumbers[i]=rand()%10+1;
       // printf("%d  ",randomnumbers[i]);
    }

    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100-i-1;j++)
        {
            if(randomnumbers[j]<randomnumbers[j+1])
            {
                int temp=randomnumbers[j];
                randomnumbers[j]=randomnumbers[j+1];
                randomnumbers[j+1]=temp;
            }
        }
    }

    for(int i=0;i<100;i++)
    {
        printf("%d \t",randomnumbers[i]);
    }

    
    return 0;
}