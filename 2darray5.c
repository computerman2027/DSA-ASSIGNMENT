// identical matrix
#include <stdio.h>
#define MAXSIZE 20

int isSame(int arr[][MAXSIZE], int r1, int c1, int arr2[][MAXSIZE], int r2, int c2)
{
    int i, j;
    if (!(r1 == r2 && c1 == c2))
        return 0;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if (arr[i][j] != arr2[i][j])
                return 0;
        }
    }
    return 1;
}
int main()
{
    int arr1[MAXSIZE][MAXSIZE], arr2[MAXSIZE][MAXSIZE];
    int r1, r2, c1, c2, i, j;
    printf("Enter no of row of 1st matrix : ");
    scanf("%d", &r1);
    printf("Enter no of column of 1st matrix : ");
    scanf("%d", &c1);
    printf("Enter no of row of 2nd matrix : ");
    scanf("%d", &r2);
    printf("Enter no of column of 2nd matrix : ");
    scanf("%d", &c2);
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
    printf("The matrices are %s\n", isSame(arr1, r1, c1, arr2, r2, c2) == 1 ? "Identical" : "Non Identical");
    return 0;
}