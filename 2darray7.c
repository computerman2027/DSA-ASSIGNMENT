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
void sortRow(int arr[][MAXSIZE],int r,int c)
{
    int i;
    for (i = 0; i < r; i++)
    {
        insertionsort(arr[i], c);
    }
}
int main()
{
    int arr[MAXSIZE][MAXSIZE];
    int r, c, i, j;
    printf("Enter no of row of matrix : ");
    scanf("%d", &r);
    printf("Enter no of column of matrix : ");
    scanf("%d", &c);
    printf("Enter elements for matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Matrix before sorting : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    sortRow(arr,r,c);
    printf("Matrix after sorting : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}