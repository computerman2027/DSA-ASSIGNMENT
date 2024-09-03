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
	else if(f==r)
	{
		printf("Dequeue element = %d\n",arr[f]);
		f=-1;
		r=-1;
	}
	else
	{
		printf("Dequeue element = %d\n",arr[f]);
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

int main()
{
	int ch,num;
	while(1)
	{
		printf("MENU\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice : ");
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
				printf("End of program\n");
				return 0;
			default:
				printf("Invalid input\n");
		}
	}
	return 0;
}