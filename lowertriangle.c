#include<stdio.h>
#define MAXSIZE 20

void lowertri(int arr[MAXSIZE][MAXSIZE],int r,int c, int arr2[MAXSIZE][MAXSIZE])
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j<=i)
			arr2[i][j]=arr[i][j];
			else
			arr2[i][j]=0;
		}
	}
}
int main()
{
	int arr1[MAXSIZE][MAXSIZE],arr2[MAXSIZE][MAXSIZE],arr3[MAXSIZE][MAXSIZE];
	int r,c,i,j;
	printf("Enter row of matrix : ");
	scanf("%d",&r);
	printf("Enter column of matrix : ");
	scanf("%d",&c);
	printf("Enter elements for matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Matrix inputed : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	lowertri(arr1,r,c,arr2);
	printf("lower triangular : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}
