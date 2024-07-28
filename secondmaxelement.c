#include <stdio.h>
#include <limits.h>
int secondmax(int *arr, int size)
{
    int m = arr[0];
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > m)
            m = arr[i];
    }
    int m2 = INT_MIN;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > m2 && arr[i] < m)
            m2 = arr[i];
    }
    return m2;
}

int main()
{
    int arr[20], size, i;
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
    int max1 = secondmax(arr, size);
    printf("2nd Maximum = %d \n", max1);
    return 0;
}
