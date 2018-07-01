#include<stdio.h>
#define MAX 10
int isfull();
int isempty();
void push(int);
struct Stack
{
	int arr[MAX];
	int top;
}S;

int main()
{
	int i,j,a;
	
	S.top=-1;

	
	i=isempty();
	
	if(i==1)
	{
		printf("\nStack is empty");
	}
	else
	{
		printf("\nStack Not empty");
	}
	for(j=0;j<MAX;j++)
	{
	printf("\nEnter an element");
	scanf("%d",&a);
	push(a);
	}
	i=isfull();
	if(i==1)
	{
		printf("\nStack is full");
	}
	else
	{
		printf("\nempty");
	}
	return 0;
}
void push(int a)
{
	S.arr[++S.top]=a;
}
int isfull()
{
	if(S.top==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(S.top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

	

	
	
	
