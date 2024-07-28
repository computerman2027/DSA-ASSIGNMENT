#include <stdio.h>

int main()
{
    int ch = 0;
    float a, c = 0;
    while (1)
    {
        printf("Menu \n1. ADD \n2. SUBTRACT\n3. MULTIPLY\n4. DIVISION\n5. EXIT\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter a number : ");
            scanf("%f", &a);
            c = c + a;
            printf("total = %f\n", c);
            break;
        case 2:
            printf("enter a number : ");
            scanf("%f", &a);
            c = c - a;
            printf("total = %f\n", c);
            break;
        case 3:
            printf("enter a number : ");
            scanf("%f", &a);
            c = c * a;
            printf("total = %f\n", c);
            break;
        case 4:
            printf("enter a number : ");
            scanf("%f", &a);
            c = c / a;
            printf("total = %f\n", c);
            break;
        case 5:
            printf("END OF PROGRAM");
            return 0;
        default:
            printf("INVALID INPUT PLEASE ENTER AGAIN\n");
            break;
        }
    }
    return 0;
}