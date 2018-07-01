//implementing queue in linked list

#include<stdio.h>
#include<stdlib.h>
struct LinkL
{
	int data;
	struct LinkL *next;
}*head;



struct LinkL *ptr;
struct LinkL *temp;
void enqueue(int x)
{
	struct LinkL *ptr;
	ptr=head;
	if(ptr==NULL)
	{
		struct LinkL *temp=(struct LinkL *)malloc(sizeof(struct LinkL));
		temp->data=x;
		temp->next=NULL;
		head=temp;
	}
	else
	{
		struct LinkL *temp=(struct LinkL *)malloc(sizeof(struct LinkL));
		temp->data=x;
		temp->next=NULL;
		head->next=temp;
	}
}
void dequeue()
{
	int x;
	
	ptr=head;
	if(ptr->next==NULL)
	{
		printf("%d",ptr->data);
		free(ptr);
		return;
	}
	if(ptr==NULL)
	{
		printf("The List is empty");
	}
	while(ptr->next!=NULL)
	{	
		temp=ptr;
		ptr=ptr->next;
	}
	x=ptr->data;
	printf("%d",x);
	temp->next=NULL;
	free(ptr);
}
	
int main()
{
	
	int a;
	while(1)
	{
		printf("\n1 ENQUEUE");
		printf("\n2 DEQUEUE");
		printf("\nOptions");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
					printf("\nEnter the element");
					scanf("%d",&a);
					enqueue(a);
					break;
			case 2:
					dequeue();
					break;
		}
	}
	return 0;
}
	
	 
