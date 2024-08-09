#include <stdio.h>
#define MAXITEM 20

void insertionsort(int *arr, int n)
{
    int temp, i, j;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0 && temp < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}
void display(int *arr, int n)
{
    int i;
    printf("ARRAY = ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int mergeArray(int *arr1, int *arr2, int *arr3, int n1, int n2)
{
    int n3 = n1 + n2, i, p1, p2;
    insertionsort(arr1, n1);
    insertionsort(arr2, n2);

    p1 = 0;
    p2 = 0;
    for (i = 0; i < n3 && p1 < n1 && p2 < n2; i++)
    {
        if (arr1[p1] < arr2[p2])
        {
            arr3[i] = arr1[p1];
            p1++;
        }
        else
        {
            arr3[i] = arr2[p2];
            p2++;
        }
    }
    if (p1 < n1)
    {
        for (; i < n3; i++)
        {
            arr3[i] = arr1[p1];
            p1++;
        }
    }
    if (p2 < n2)
    {
        for (; i < n3; i++)
        {
            arr3[i] = arr2[p2];
            p2++;
        }
    }
    return n3;
}
int main()
{
    int n1, n2, n3, i;
    int arr1[MAXITEM], arr2[MAXITEM], arr3[MAXITEM + MAXITEM];
    printf("Enter size of array1 : ");
    scanf("%d", &n1);
    if (n1 < 1 || n1 > MAXITEM)
    {
        printf("INVALID SIZE\n");
        return 0;
    }
    printf("Enter %d numbers : ", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array2 : ");
    scanf("%d", &n2);
    if (n2 < 1 || n2 > MAXITEM)
    {
        printf("INVALID SIZE\n");
        return 0;
    }
    printf("Enter %d numbers : ", n2);
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    n3 = mergeArray(arr1, arr2, arr3, n1, n2);
    display(arr3, n3);
    return 0;
}
