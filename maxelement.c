#include <stdio.h>
int max(int *arr, int size)
{
    int m = arr[0];
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > m)
            m = arr[i];
    }
    return m;
}

int main()
{
    int arr[20],size,i;
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
    int max1 = max(arr, size);
    printf("Maximum = %d \n", max1);
    return 0;
}
