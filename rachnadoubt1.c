// Online C compiler to run C program online
#include <stdio.h>
#define Max 50
int a[Max];
int binsrch(int a[Max],int low,int high,int x);

struct t{
    int val,in;
};

int main() 
{
    struct t aux[Max];
    struct t temp;
    int n,i,item,pos,low,high,mid;
     int j;
     
    printf("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d",&n);
    
    printf("ENTER ELEMENT IN THE ARRAY : \n");
    for(i=0;i<n;i++)
    {
        printf("ARRAY[%d] : ",i);
        scanf("%d",&a[i]);
        aux[i].val=a[i];
        aux[i].in=i;
        
    }
    
    printf("ENTER THE SEARCH ELEMENT : ");
    scanf("%d",&item);
    
    printf("DISPLAYING ELEMENTS BEFORE SORTING THE ARRAY: \n");
     for(int i=0;i<n;i++)
    printf("ARRAY[%d]: %d \n",i,aux[i].val);
    
    
    for(i=1;i<n;i++)
    {
        temp=aux[i];
        for(j=i-1;j>=0 && temp.val<aux[j].val;j--)
        aux[j+1]=aux[j];
        aux[j+1]=temp;
    }
    printf("DISPLAYING ELEMENTS AFTER SORTING THE ARRAY: \n");
         for(int i=0;i<n;i++)
    printf("ARRAY[%d]: %d \n",i,aux[i].val);
    
    low=0;
    high=n-1;
    pos=-1 ;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        if(aux[mid].val==item)
        {
            pos=mid;
            break;
        }
        else if(item<aux[mid].val)
        high=mid-1;
        else
        low=mid+1;
    }
   
    
    if(pos==-1)
    printf("SEARCH ELEMENT NOT FOUND !! \n");
    else
    printf("SEARCH ELEMENT FOUND AT POSITION : %d \n",aux[pos].in);
    
}