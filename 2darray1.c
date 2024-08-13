// add 2 matrix
#include <stdio.h>
#define MAXSIZE 20

void add(int arr1[MAXSIZE][MAXSIZE], int r1, int c1, int arr2[MAXSIZE][MAXSIZE], int arr3[MAXSIZE][MAXSIZE])
{
    int i, j;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}
int main()
{
    int arr1[MAXSIZE][MAXSIZE], arr2[MAXSIZE][MAXSIZE], arr3[MAXSIZE][MAXSIZE];
    int r1, r2, c1, c2, i, j;
    printf("Enter row of 1st matrix : ");
    scanf("%d", &r1);
    printf("Enter column of 1st matrix : ");
    scanf("%d", &c1);
    printf("Enter row of 2nd matrix : ");
    scanf("%d", &r2);
    printf("Enter column of 2nd matrix : ");
    scanf("%d", &c2);
    if (!(r1 == r2 && c1 == c2))
    {
        printf("INVALID AARRAY SIZE\n");
        return 0;
    }
    printf("Enter elements for 1st matrix\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter elements for 2nd matrix\n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Matrix 1 : \n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2 : \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    add(arr1, r1, c1, arr2, arr3);
    printf("SUM : \n");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
