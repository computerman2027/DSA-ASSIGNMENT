// transpose of matrix
#include <stdio.h>
#define MAXSIZE 20

void transpose(int arr1[][MAXSIZE], int r, int c, int arr2[][MAXSIZE])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }
}
int main()
{
    int arr1[MAXSIZE][MAXSIZE], arr2[MAXSIZE][MAXSIZE];
    int r1, r2, c1, c2, i, j;
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
    printf("Matrix before transposed : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    r2 = c1;
    c2 = r1;
    transpose(arr1, r1, c1, arr2);
    printf("Matrix after transposed : \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}