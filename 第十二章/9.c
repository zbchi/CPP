#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    printf("How many words do you wish to enter?");
    int n;scanf("%d",&n);
    printf("Enter %d words now:\n",n);
    char**words=(char**)malloc(n*sizeof(char*));//char *words[n]
    if(words==NULL)
    {
        printf("Failed");
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        char temp[100];
        scanf("%s",temp);
        //words[i]代表单词数组
        words[i]=(char*)malloc((strlen(temp)+1)*sizeof(char));
        if(words[i]==NULL)
        {
            printf("Failed");
            return 1;
        }
        strcpy(words[i],temp);
    }

    printf("Here are your words:\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",words[i]);
        free(words[i]);
    }
    free(words);
    
    return 0;
}
