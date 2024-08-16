// trace of a matrix
#include <stdio.h>
#define MAXSIZE 20

int trace(int arr[][MAXSIZE], int r)
{
    int s = 0, i;
    for (i = 0; i < r; i++)
    {
        s += arr[i][i];
    }
    return s;
}
int main()
{
    int arr1[MAXSIZE][MAXSIZE];
    int r, c, i, j;
    printf("Enter no of row of matrix : ");
    scanf("%d", &r);
    printf("Enter no of column of matrix : ");
    scanf("%d", &c);
    if (r != c)
    {
        printf("Trace of a matrix is applicable only for square matrix");
        return 0;
    }
    printf("Enter elements for matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Matrix inputed : \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("trace = %d\n", trace(arr1, r));
    return 0;
}