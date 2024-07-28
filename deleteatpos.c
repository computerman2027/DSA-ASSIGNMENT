#include <stdio.h>
#define MAX_SIZE 20
int arr[MAX_SIZE], size;
int deleteAtPos(int *arr, int n, int pos)
{
    if (n == 0)
    {
        printf("Array is Empty Deletion not possible\n");
        return n;
    }
    int i;
    printf("Deleted term = %d\n", arr[pos - 1]);
    for (i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return (n - 1);
}
int main()
{
    int i, pos;
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
    printf("Enter position of the element to be deleted : ");
    scanf("%d", &pos);
    size = deleteAtPos(arr, size, pos);
    printf("Array elements After deletion = ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}