#include<stdio.h>
void fun1(){}
void fun2(){}
void fun3(){}
int main()
{
    void(*p[])()={fun1,fun2,fun3};
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        fun1();
        break;
        case 2:
        fun2();break;
        case 3:
        fun3();break;
    }
    return 0;
}