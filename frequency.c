#include<stdio.h>
#define MAX_SIZE 20
int arr[MAX_SIZE],size;

int freq(int *arr,int n,int item)
{
    int i,f=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==item)
        f++;
    }
    return f;
}
int main()
{
    int i,val;
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
    printf("Enter element whose frequency need to be searched : ");
    scanf("%d",&val);
    printf("Frequency of %d is %d",val,freq(arr,size,val));
    return 0;
}