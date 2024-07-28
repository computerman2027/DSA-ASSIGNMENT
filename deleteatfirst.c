#include <stdio.h>
#define MAX_SIZE 20
int arr[MAX_SIZE], size;
int deleteAtFirst(int *arr, int n)
{
    if (n == 0)
    {
        printf("Array is Empty Deletion not possible\n");
        return n;
    }
    printf("Deleted term = %d\n", arr[0]);
    int i;
    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return (n - 1);
}
int main()
{
    int i, item;
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
    size = deleteAtFirst(arr, size);
    printf("Array elements After deletion = ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}