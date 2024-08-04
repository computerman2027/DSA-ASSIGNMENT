#include <stdio.h>
#define MAX_SIZE 20

int insertBeforeElement(int *arr, int n, int ele, int val)
{
    int i;
    int pos = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Value not found\n");
        return n;
    }
    for (i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
    return n + 1;
}
int insertAfterElement(int *arr, int n, int ele, int val)
{
    int i;
    int pos = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == ele)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Value not found\n");
        return n;
    }
    for (i = n - 1; i > pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos + 1] = val;
    return n + 1;
}

int main()
{
    int arr[MAX_SIZE];
    int i, ch, ele, val, n;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE)
    {
        printf("INVALID INPUT\n");
        return 0;
    }
    printf("Enter %d numbers : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array = ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    while (1)
    {
        printf("MENU\n1. Insert Before an Element\n2. Insert After an Element\n3. Display the array\n4. Exit\n");
        printf("enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter element before which value need to be inserted : ");
            scanf("%d", &ele);
            printf("enter value to be inserted : ");
            scanf("%d", &val);
            n = insertBeforeElement(arr, n, ele, val);
            break;
        case 2:
            printf("enter element after which value need to be inserted : ");
            scanf("%d", &ele);
            printf("enter value to be inserted : ");
            scanf("%d", &val);
            n = insertAfterElement(arr, n, ele, val);
            break;
        case 3:
            printf("Array = ");
            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 4:
            printf("End of program\n ");
            return 0;
        default:
            printf("invalid input\n");
        }
    }
    return 0;
}