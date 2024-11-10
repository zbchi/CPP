#include<stdio.h>
#include<ctype.h>
int main()
{
    int letters=0;
    int words=0;
    int in_word=0;
    int ch;
    while((ch=getchar()!=EOF))
    {
        if(isalpha(ch))
        {
            letters++;
            if (!in_word)
            {
                in_word=1;
                words++;
            }
            
        }
        else
        {
            in_word=0;
        }
    }
    printf("%d",words);
    double average=(double)letters/words;
    printf("%.2f\n",average);
    return 0;
}