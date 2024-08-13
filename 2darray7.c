// row ascending order
#include <stdio.h>
#define MAXSIZE 20

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
int main()
{
    int arr1[MAXSIZE][MAXSIZE];
    int r1, c1, i, j;
    printf("Enter no of row of matrix : ");
    scanf("%d", &r1);
    printf("Enter no of column of matrix : ");
    scanf("%d", &c1);
    printf("Enter elements for matrix\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Matrix before sorting : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r1; i++)
    {
        insertionsort(arr1[i], c1);
    }
    printf("Matrix after sorting : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}