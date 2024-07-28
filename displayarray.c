#include<stdio.h>
#define MAX_SIZE 20
int arr[MAX_SIZE],size;

void displayarray(int *arr, int n)
{
    int i;
    printf("Array elements = ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return;
}

int main()
{
    int i;
    printf("Enter size of array : ");
    scanf("%d",&size);
    if(size==0)
    {
        printf("Invalid size");
        return 0;
    }
    printf("Enter %d numbers : \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    displayarray(arr,size);
    return 0;
}