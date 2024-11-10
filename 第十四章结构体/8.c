#include<stdio.h>
#include<string.h>
struct info
{
    int num;
    int isReserved;
    char firstname[100];
    char lastname[100];

};

//打印菜单
void printMenu()
{
    printf("\nTo choose a function, enter its letter label:\n");
    printf("a) Show number of empty seats\n");
    printf("b) Show list of empty seats\n");
    printf("c) Show alphabetical list of seats\n");
    printf("d) Assign a customer to a seat assignment\n");
    printf("e) Delete a seat assignment\n");
    printf("f) Quit\n");
}
//显示空座位数量
void emptySeatCount(struct info person[],int size)
{
    int emptyCount=0;
    for(int i=0;i<size;i++)
    {
        if(person[i].isReserved==0)
        emptyCount++;
    }
    printf("There are %d empty seats available.\n",emptyCount);
    return;
}
//显示空座位列表
void showEmptySeats(struct info person[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(person[i].isReserved==0)
        printf("%d ",person[i].num);
    }
    printf("\n");
}

//按字母顺序显示座位列表
void showAlphabeticalList(struct info person[],int size)
{
    //冒泡排序对已经预定的作为进行字母顺序排序
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(person[j].isReserved&&person[j+1].isReserved)
            {
                if(strcmp(person[j].firstname,person[j+1].firstname)>0)
                {
                    struct info temp=person[j];
                    person[j]=person[j+1];
                    person[j+1]=temp;
                }
            }
        }
    }
    printf("A;phabetical list of seats:\n");
    for(int i=0;i<size;i++)
    {
        if(person[i].isReserved)
        printf("Seats %d:%s %s\n",person[i].num,person[i].firstname,person[i].lastname);
    }
}

//为客户分配座位
void assignSeat(struct info person[],int size)
{
    int seatNum;
    char firstname[50];char lastname[50];
    printf("Enter the seat numbeer you want to assign:");
    scanf("%d",&seatNum);
    if(seatNum<1||seatNum>size)
    {
        printf("Invalid seat number!\n");
        return;
    }
    if(person[seatNum-1].isReserved)
    {
        printf("Seat %d is alreaady reserved!\n",seatNum);
        return ;
    }

    printf("Enter the customer's first name:");
    scanf("%s",firstname);
    printf("Enter the customer's last name:");
    scanf("%s",lastname);

    person[seatNum-1].isReserved=1;
    strcpy(person[seatNum-1].firstname,firstname);
    strcpy(person[seatNum-1].lastname,lastname);
    printf("done\n");return ;
}

//删除座位预定
void deletReservation(struct info person[],int size)
{
    int seatNum;
    printf("Enter the seat number to cancel the reservation:");
    scanf("%d",&seatNum);

    if(seatNum<1||seatNum>size)
    {
        printf("Invalid seat number!\n");
        return;
    }

    if(!person[seatNum-1].isReserved)
    {
        printf("Seat %d is not reserved!\n",seatNum);
        return ;
    }

    person[seatNum-1].isReserved=0;
    printf("done");return ;
}

int main()
{
    struct info person[12];
    //初始化成员为空
    for(int i=0;i<12;i++)
    {
        person[i].isReserved=0;
        person[i].num=i+1;
        strcpy(person[i].firstname,"");
        strcpy(person[i].lastname,"");
    }
    while(1)
    {
        printMenu();
        printf("Enter your choice:");
        char choice;scanf(" %c",&choice);// %c前加空格，跳过空白符。或getchar();

        switch (choice)
        {
        case 'a':
            emptySeatCount(person,12);
            break;
        case 'b':
            showEmptySeats(person,12);
            break;
        case 'c':
            showAlphabeticalList(person,12);
            break;
        case 'd':
            assignSeat(person,12);
            break;
        case 'e':
            deletReservation(person,12);
            break;
        
        case 'f':
            return 1;
        }
    }
    return 0;
}