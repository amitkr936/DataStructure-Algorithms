#include<stdio.h>
#include<stdlib.h>
struct TreeNode
{
	int data;
	struct TreeNode *left;
	struct TreeNode *right;
};


void preorder(struct TreeNode *root)
{
	
	if(root!=NULL)
	{
		printf("%d-->",root->data);
		preorder(root->left);
		preorder(root->right);
	}
	
}
void inorder(struct TreeNode *root)
{
	struct TreeNode *ptr;
	ptr=root;
	if(ptr!=NULL)
	{
		inorder(root->left);
		printf("%d-->",root->data);
		inorder(root->right);
	}
}
void postorder(struct TreeNode *root)
{
	struct TreeNode *ptr;
	ptr=root;
	if(ptr!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d-->",root->data);
	}
}

void insert(struct TreeNode **root,int d)
{
	struct TreeNode *temp=*root,*prev=*root;
	if(*root==NULL)
	{
		*root=(struct TreeNode *)malloc(sizeof(struct TreeNode));
		(*root)->data=d;
		(*root)->left = (*root)->right =NULL;
	}
	else
	{
		
		while(temp != NULL)
		{
			if(d > temp->data)
			{
				prev=temp;
				temp=temp->right;
			}
			else
			{
				prev=temp;
				temp=temp->left;
			}//upto leaf
		}
		temp=(struct TreeNode *)malloc(sizeof(struct TreeNode));
		temp->data=d;
		if(d >= prev->data)
		{
			prev->right=temp;
		}
		else
		{
			prev->left=temp;
		}
	}
}

int leafCount(struct TreeNode *root)
{
	int a;
	
	if(root==NULL)
	{
		return 0;
	}
	else if(root->left==NULL && root->right==NULL)
	{
		return 1;
	}
	else
	{
	    a=leafCount(root->left)+leafCount(root->right);
	    return 2*a;
	}
}

 
int main()
{
	struct TreeNode *root;
	root=NULL;
	int a;
	int i=1;
	int r=1;
	int c;
	
		while(i==1)
		{
			printf("\nEnter the Element you want to insert");
			scanf("%d",&a);
			insert(&root,a);
			printf("\nDo u wana continue");
			scanf("%d",&i);
		}
		while(r==1)
		{
			printf("\nSelect your Traversal");
			printf("\n1.Preorder");
			printf("\n2.Postorder");
			printf("\n3.Inorder");
			scanf("%d",&c);
			switch(c)
			{
				case 1:
				preorder(root);
				break;
				case 2:
				postorder(root);
				break;
				case 3:
				inorder(root);
				break;
			}
			printf("\nDo u want to continue");
			scanf("%d",&r);
		}
		printf("\nThe total number of Leaf noads are %d",leafCount(root));
		
	
	return 0;
}
	
