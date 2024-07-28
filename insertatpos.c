#include<stdio.h>
#define MAX_SIZE 20
int arr[MAX_SIZE],size;
void insertAtPos(int *arr,int n,int item,int pos)
{
    if(n==MAX_SIZE)
    {
        printf("Element cannot be inserted\n");
        return;
    }
    int i;
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=item;
    size++;
}
int main()
{
    int i,item,p;
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
    printf("Enter elemnet to be inserted : ");
    scanf("%d",&item);
    printf("Enter position where it to be inserted : ");
    scanf("%d",&p);
    insertAtPos(arr,size,item,p);
    printf("Array elements = ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}