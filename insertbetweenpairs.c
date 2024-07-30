#include <stdio.h>
#define MAX_SIZE 20
int arr[MAX_SIZE], size;

int insertAtPair(int *arr, int n, int p1, int p2, int val)
{
    int i, j;
    if(n==MAX_SIZE)
    {
        return -1;
    }
    for (i = 0; i < n - 1; i++)
    {
        if (arr[i] == p1 && arr[i + 1] == p2)
        {
            for (j = n - 1; j >= i + 1; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[i + 1] = val;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int i, item, p1, p2, result;
    printf("Enter size of array : ");
    scanf("%d", &size);
    if (size == 0)
    {
        printf("Invalid size");
        return 0;
    }
    printf("Enter %d numbers : \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array elements = ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("enter the value of pair 1 : ");
    scanf("%d", &p1);
    printf("enter the value of pair 2 : ");
    scanf("%d", &p2);
    printf("enter the value to be inserted : ");
    scanf("%d", &item);
    result = insertAtPair(arr, size, p1, p2, item);
    if (result == 1)
        size++;
    else if(result==0)
    {
        printf("Insertion failed - Pair Not Found\n");
        return 0;
    }
    else if(result==-1)
    {
        printf("Insertion failed - Max length reached\n");
        return 0;
    }
    printf("Array elements after insertion : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}