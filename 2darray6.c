// sparse matrix
#include <stdio.h>
#define MAXSIZE 20
int isSparse(int arr[][MAXSIZE], int r, int c)
{
    int i, j, count = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (((float)count) / (i * j) >= 0.5)
        return 1;
    else
        return 0;
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
    printf("Matrix : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("The matrix is %s\n", isSparse(arr1, r1, c1) == 1 ? "Sparse" : "Non Sparse");
    return 0;
}