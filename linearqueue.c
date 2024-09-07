#include<stdio.h>
#define MAXSIZE 5

int arr[MAXSIZE];
int f=-1,r=-1;

void enqueue(int item)
{
	if( r==MAXSIZE-1)
	{
		printf("OVERFLOW\n");
		return;
	}
	if(r==-1)
	{
		f++;
	}
	r++;
	arr[r]=item;
	return;
}

void dequeue()
{
	if(f==-1 && r==-1)
	{
		printf("UNDERFLOW\n");
		return;
	}
	printf("Dequeue element = %d\n",arr[f]);
	if(f==r)
	{
		f=-1;
		r=-1;
	}
	else
	{
		f++;
	}
}

void display()
{
	int i;
	if(r==-1)
	{
		printf("Queue is empty\n");
		return;
	}
	for(i=f;i<=r;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int isEmpty(){
	if(f==-1 && r==-1)
	return 1;
	return 0;
}
int isFull(){
	if(r==MAXSIZE-1)
	return 1;
	return 0;
}
int main()
{
	int ch,num;
	while(1)
	{
		printf("MENU\n1. Enqueue\n2. Dequeue\n3. Display\n4. IsEmpty\n5. IsFull\n6. Exit\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter number to be inserted : ");
				scanf("%d",&num);
				enqueue(num);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("The queue is %s\n",isEmpty()==1?"Empty":"Not Empty");
				break;
			case 5:
				printf("The queue is %s\n",isFull()==1?"Full":"Not full");
				break;
			case 6:
				printf("End of program\n");
				return 0;
			default:
				printf("Invalid input\n");
		}
	}
	return 0;
}