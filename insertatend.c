#include<stdio.h>
#define MAX_SIZE 20
int arr[MAX_SIZE],size;
void insertAtLast(int *arr,int n,int item)
{
    if(n==MAX_SIZE)
    {
        printf("Element cannot be inserted\n");
        return;
    }
    arr[n]=item;
    size++;
}
int main()
{
    int i,item;
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
    printf("Array elements = ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter element to be inserted : ");
    scanf("%d",&item);
    insertAtLast(arr,size,item);
    printf("Array elements after insertion : ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}