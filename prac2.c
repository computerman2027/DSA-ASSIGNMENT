#include <stdio.h>
void Insert_At_Begining(int arr[], int n, int item)
{
    int i;
    for (i = n; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = item;
    printf("n = %d\n", n);
}
void Insert_At_End(int arr[], int *n, int item)
{
    *n = *n + 1;
    arr[*n - 1] = item;
    printf("n = %d\n", *n);
}
// int Insert_At_End(int arr[], int n, int item)
// {
//     n = n + 1;
//     arr[n - 1] = item;
//     printf("n = %d\n", n);
//     return n;
// }
void Insert_At_Middle(int arr[], int n, int item, int index)
{
    int i;
    for (i = n; i >= index + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = item;
    printf("n = %d\n", n);
}
int main()
{
    int i, n, arr[10], item, choice, index;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter your choice:\n");
    printf("1. Insert at begining\n 2. Insert at end\n 3. Insert at any position\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter element to insert: ");
        scanf("%d", &item);
        Insert_At_Begining(arr, n, item);
        break;
    case 2:
        printf("Enter element to insert: ");
        scanf("%d", &item);
        //n = Insert_At_End(arr, n, item);
        Insert_At_End(arr, &n, item);
        break;
    case 3:
        printf("Enter element to insert: ");
        scanf("%d", &item);
        printf("Enter the position: ");
        scanf("%d", &index);
        Insert_At_Middle(arr, n, item, index);
        break;
    default:
        printf("Invalid Choice");
    }
    printf("i = %d n = %d\n", i, n);
    printf("Final array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}