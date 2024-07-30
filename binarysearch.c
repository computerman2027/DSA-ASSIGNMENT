#include <stdio.h>
#define MAX_SIZE 20
int bsearch1(int *arr, int n, int val)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + ((high - low) / 2);
        if (arr[mid] == val)
            return 1;
        if (arr[mid] < val)
            low = mid + 1;
        if (arr[mid] > val)
            high = mid - 1;
    }
    return 0;
}
int bsearch2(int *arr, int val, int low, int high)
{
    int mid;
    if (low > high)
        return 0;
    mid = low + ((high - low) / 2);
    if (arr[mid] == val)
        return 1;
    if (arr[mid] < val)
        return bsearch2(arr, val, mid + 1, high);
    if (arr[mid] > val)
        return bsearch2(arr, val, low, mid - 1);
}
int main()
{
    int arr[MAX_SIZE];
    int i, ch, val, n;
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
        if(i!=0 && arr[i-1]>arr[i])
        {
            printf("THE ARRAY IS NOT IN SORTED ASCENDING ORDER\n");
            return 0;
        }
    }
    printf("Array = ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    while (1)
    {
        printf("MENU\n1. bsearch iteration\n2. bsearch recursion\n3. Exit\n");
        printf("enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter number to search : ");
            scanf("%d", &val);
            printf("number %d is %s\n", val, bsearch1(arr, n, val) == 1 ? "present" : "absent");
            break;
        case 2:
            printf("enter number to search : ");
            scanf("%d", &val);
            printf("number %d is %s\n", val, bsearch2(arr, val, 0, n - 1) == 1 ? "present" : "absent");
            break;
        case 3:
            printf("End of program\n ");
            return 0;
        default:
            printf("invalid input\n");
        }
    }
    return 0;
}