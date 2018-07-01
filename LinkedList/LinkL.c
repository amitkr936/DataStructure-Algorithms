#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int info;
	struct Node *next;
}node;

void insert(node **head)
{
	int d;
	printf("\nEnter the element u wana enter");
	scanf("%d",&d);
	node *newNode=(node *)malloc(sizeof(node));//new node creation
		newNode->info=d;
		newNode->next=(node *)NULL;
	if(*head==(node *)NULL)
	{
		//single node
		*head=newNode;
	}
	//else if(*head->next==(node *)NULL) 
	//{
		//*head->next=newNode;
	//}
	else
	{
		node *ptr;
		ptr=*head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newNode;
	}
}

void display(node *head)
{
	node *ptr;
	ptr=head;
	while(ptr)
	{
		printf("<--%d-->",ptr->info);
		ptr=ptr->next;
	}
}
					
void search(node *head)
{
	int i;
	node *ptr;
	ptr=head;
	printf("\nEnter the element u wana search");
	scanf("%d",&i);
	while((ptr!=(node *)NULL) && (ptr->info!=i))
	{
		ptr=ptr->next;
	}
	if(ptr==(node *)NULL)
	{
		printf("\nNOT Found");
		return;
	}
	else
	{
		if(ptr->info==i)
		{
			printf("\nFOUND");
			return;
		}
		printf("\nNOT found");
		return;
	}
}

void revdisplay(node *head)
{
	
	node *ptr;
	ptr=head;
	if(ptr->next !=(node *)NULL)
	{
		revdisplay(ptr->next);
	}
	printf("<--%d-->",ptr->info);
	
}

void delete(node *head)
{
	node *loc,*temp;
	//ptr=*head;

	if(head==(node *)NULL)
	{
		
		return;
	}
	else if(head->next==(node *)NULL)
	{
		head->info=(node *)NULL;
		head=(node *)NULL;
		//free(head);
	}
	else
	{
		loc=head;
		temp=head->next;
		
		while(temp->next!=(node *)NULL)
		{
			loc=temp;
			temp=temp->next;
		}
		loc->next=(node *)NULL;
		free(temp);
	}
}
	


int main()
{
	node *head=(node *)NULL;
	
	//*head->next=NULL;

	int a;
	while(1)
	{
		printf("\nEnter the Options ");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Searching\n5.Reversedisplay");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				insert(&head);
				break;
			case 2:
				delete(head);
				break;
			case 3:
				display(head);
				break;
			case 4:
				search(head);
				break;
			case 5:
				revdisplay(head);
				break;
			default:
				printf("\nplease enter the correct options");
				break;
		}
	}
	return 0;
}
