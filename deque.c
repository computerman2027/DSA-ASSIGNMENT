#include <stdio.h>
#define MAXSIZE 5

int queue[MAXSIZE];

int front = -1, rear = -1;

void insertAtFront(int item)
{
    if ((rear + 1) % MAXSIZE == front)
    {
        printf("Queue full. item cannot be inserted\n");
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        queue[front] = item;
    }
    else
    {
        front = (front - 1 + MAXSIZE) % MAXSIZE;
        queue[front] = item;
    }
}

void insertAtEnd(int item)
{
    if ((rear + 1) % MAXSIZE == front)
    {
        printf("Queue full. item cannot be inserted\n");
        return;
    }
    else
    {
        if (front == -1)
        {
            front++;
        }
        rear = (rear + 1) % MAXSIZE;
        queue[rear] = item;
    }
}

void deleteAtEnd()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Dequed element = %d\n", queue[rear]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        rear = (rear - 1 + MAXSIZE) % MAXSIZE;
    }
}

void deleteAtFront()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Dequed element = %d\n", queue[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        front = (front + 1) % MAXSIZE;
}

void display()
{
    int i;
    if (rear == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    if (rear < front)
    {
        for (i = front; i < MAXSIZE; i++)
        {
            printf("%d ", queue[i]);
        }
        for (i = 0; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

int isFull()
{
    if (front == (rear + 1) % MAXSIZE)
        return 1;
    return 0;
}

int isEmpty()
{
    if (rear == -1 && front == -1)
        return 1;
    return 0;
}

int main()
{
    int ch, ch2, num;
    printf("TYPES OF DEQUE\n1. Input restricted\n2. Output restricted\nEnter your choice : ");
    scanf("%d", &ch2);
    while (1)
    {
        printf("MENU\n1. Enqueue at front\n2. Enqueue at end\n3. Dequeue at front\n4. Dequeue at end\n5. Display\n6. IsFull\n7. IsEmpty\n8. Exit\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (ch2 == 1)
            {
                printf("This function is not available for Input Restricted Deque\n");
                break;
            }
            printf("Enter number to be inserted : ");
            scanf("%d", &num);
            insertAtFront(num);
            break;
        case 2:
            printf("Enter number to be inserted : ");
            scanf("%d", &num);
            insertAtEnd(num);
            break;
        case 3:
            deleteAtFront();
            break;
        case 4:
            if (ch2 == 2)
            {
                printf("This function is not available for Output Restricted Deque\n");
                break;
            }
            deleteAtEnd();
            break;
        case 5:
            display();
            break;
        case 6:
            printf("Queue is %s\n", isFull() ? "Full" : "not full");
            break;
        case 7:
            printf("Queue is %s\n", isEmpty() ? "Empty" : "not Empty");
            break;
        case 8:
            printf("End of program\n");
            return 0;
        default:
            printf("Invalid input\n");
        }
    }
    return 0;
}