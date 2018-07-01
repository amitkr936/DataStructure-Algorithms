#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node *next;
}*head; 
void insert_to_head(struct Node *head)
{	
	int d;
	printf("\nEnter the element");
	scanf("%d",&d);
	struct Node * temp=(struct Node *)malloc(sizeof(struct Node));
	temp->data=d;
	temp->next=NULL;
	if(head==NULL)
	{
		head->next=temp;
	}
}
void insert_to_tail(struct Node * head)
{
	int d;
	printf("\nEnter the element");
	scanf("%d",&d);
	struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
	temp->data=d;
	temp->next=NULL;
	
	
int main()
{
	int a;
	while(1)
	{
		printf("\nWelcome to Linked List");
		printf("\nSelect options");
		printf("\n1-insert to head");
		printf("\n2-insert to tail");
		printf("\n3-insert after node");
		printf("\n4-delete from head");
		printf("\n5-delete from tail");
		printf("\n6-delete after node");
		printf("\n7-traversel");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			insert_to_head(head);
			break;
			case 2:
			insert_to_tail(head);
			break;
			case 3:
			insert_after_node(head);
			break;
			case 4:
			delete_from_head(head);
			break;
			case 5:
			delete_from _tail(head);
			break;
			case 6:
			delete_after_node(head);
			break;
			case 7:
			traverse(head);
			break;
			default:
			printf("\nEnter the right option");
		}
	}
	return 0;
}
			
		

	
	
	


