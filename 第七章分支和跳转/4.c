#include <stdio.h>

int main() {
    char ch;
    int count1 = 0; // 记录句号替换次数
    int count2= 0; // 记录感叹号替换次数

    printf("请输入文本（输入 '#' 结束）:\n");
    while((ch=getchar())!='#')
    {
        switch(ch)
        {
            case '.':
            putchar('!');
            count1++;
            break;
            case '!':
            putchar('!');
            putchar('!');
            count2++;
            break;
            default:
            putchar(ch);
            break;
        }
    }



    // 报告替换次数
    printf("\n替换了 %d 个句号为感叹号，替换了 %d 个感叹号为双感叹号。\n",count1,count2);

    return 0;
}
