#include<stdio.h>
#include<stdlib.h>
typedef struct TreesNode
{
	struct TreesNode *left;
	int info;
	struct TreesNode *right;
}node;
void insert(node **head,int data)
{
	node *ptr;
	ptr=*head;
	if(*head==(node *)NULL)
	{
		node *temp;
		temp=(node *)malloc(sizeof(node));
		temp->left=NULL;
		temp->info=data;
		temp->right=NULL;
		*head=temp;
	}
	else if(data < ptr->info)
	{
		insert(&(ptr->left),data);
	}
	else
	{
		insert(&(ptr->right),data);
	}
}
	
int leafCount(node *head)
{
	if(head==NULL)
	{
		return 0;
	}
	else if((head->left==NULL) || (head->right==NULL))
	{
		return 1;
	}
	else
	{
		return leafCount(head->left)+leafCount(head->right)+1;
	}
}

int nodeCount(node *head)
{
	if(head==NULL)
	{
		return 0;
	}
	else
	{
		return nodeCount(head->left)+nodeCount(head->right)+1;
	}
}
		
int height(node *head)
{
    if(head==NULL)
    {
		return 0;
	}
	else
	{
		int ls,rs;
		ls=height(head->left);
		rs=height(head->right);
		if(ls>rs)
		{
			return ls+1;
		}
		else
		{
			return rs+1;
		}
	}
}

void inorder(node *head)
{
	if(head!=(node *)NULL)
	{
		inorder(head->left);
		printf("<--%d-->",head->info);
		inorder(head->right);
	}

}
void preorder(node *head)
{
	if(head)
	{
		printf("<--%d-->",head->info);
		preorder(head->left);
		preorder(head->right);
	}
}
void postorder(node *head)
{
	if(head)
	{
		preorder(head->left);
		preorder(head->right);
		printf("<--%d-->",head->info);

	}
}		



void traversal(node *head)
{
	int s;
	printf("\nSelect Traversal Type");
	printf("\n1.Inorder\n2.Preorder\n3.Postorder");
	scanf("%d",&s);
	switch(s)
	{
		case 1:
		inorder(head);
		break;
		case 2:
		preorder(head);
		break;
		case 3:
		postorder(head);
		break;
	}
}


int main()
{
	int a;
	int d,l;
	int c,h;
	node *head=(node *)NULL;
	while(1)
	{
		printf("\nEnter your options");
		printf("\n1.Insert\n2.Delete\n3.LeafCount\n4.NodeCount\n5.HeightOfTree\n6.Traversal");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				
				printf("\nEnter the element you wana insert");
				scanf("%d",&d);
				insert(&head,d);
				break;
			case 2:
				//delete(head);
				break;
			case 3:
				l=leafCount(head);
				printf("\nNumber of leafs =%d",l);
				break;
			case 4:
				c=nodeCount(head);
				printf("\nTotal number of nodes =%d",c);
				break;
			case 5:
				h=height(head);
				printf("\nThe total height of the tree=%d",h);
				break;
			case 6:
				traversal(head);
				break;
			default:
				printf("\nSelect right option");
		}
	}
	return 0;
}

		
	
