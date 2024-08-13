// multiplication of 2 matrix
#include <stdio.h>
#define MAXSIZE 20

void multiply(int arr1[][MAXSIZE], int r1, int c1, int arr2[][MAXSIZE], int r2, int c2, int arr3[][MAXSIZE], int r3, int c3)
{
	int i, j, k;
	for (i = 0; i < r3; i++)
	{
		for (j = 0; j < c3; j++)
		{
			arr3[i][j] = 0;
			for (k = 0; k < c1; k++)
			{
				arr3[i][j] += (arr1[i][k] * arr2[k][j]);
			}
		}
	}
}
int main()
{
	int arr1[MAXSIZE][MAXSIZE], arr2[MAXSIZE][MAXSIZE], arr3[MAXSIZE][MAXSIZE];
	int r1, r2, c1, c2, r3, c3, i, j, k;
	printf("Enter row of 1st matrix : ");
	scanf("%d", &r1);
	printf("Enter column of 1st matrix : ");
	scanf("%d", &c1);
	printf("Enter row of 2nd matrix : ");
	scanf("%d", &r2);
	printf("Enter column of 2nd matrix : ");
	scanf("%d", &c2);
	if (!(c1 == r2))
	{
		printf("INVALID MATRIX SIZE\n");
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
	r3 = r1;
	c3 = c2;
	multiply(arr1, r1, c1, arr2, r2, c2, arr3, r3, c3);
	printf("Multiplied Matrix : \n");
	for (i = 0; i < r3; i++)
	{
		for (j = 0; j < c3; j++)
		{
			printf("%d\t", arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}