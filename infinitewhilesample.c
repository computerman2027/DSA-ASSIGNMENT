#include<stdio.h>

int p1()
{
    printf("function 1\n");
    return -2;
}
void p2()
{
    printf("function 2\n");
    return;
}
void p3()
{
    printf("function 3\n");
    return;
}

int main()
{
    int choice;
    //for(;1;)
    //while(1)
    {
        printf("MENU\n1. function 1\n2. function 2\n3.function 3\n4. exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
            p1();
            break;
            case 2:
            p2();
            break;
            case 3:
            p3();
            break;
            case 4:
            printf("ENd of program\n");
            return 0;
            default:
            printf("INVALID INPUT\n");
        }
    }
    return 0;
}