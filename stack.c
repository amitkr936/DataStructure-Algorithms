#include<stdio.h>
#define MAX 10
struct Stk
{
	int arr[MAX];
	int top;
};
void push(struct Stk *s)
{
	if(s->top==MAX-1)
	{
		printf("\nThe stacjk is full");
	}
	else
	{	
		int a;
		printf("\nEnter the number");
		scanf("%d",&a);
		s->arr[++s->top]=a;
		printf("\nPushed");
	}
}
int pop(struct Stk *s)
{
	if(s->top==-1)
	{
		printf("\nThe stack is empty");
		return -1;
	}
	else
	{
		
		return s->arr[s->top--];
	}
}	

int peek(struct Stk *s)
{
	if(s->top==-1)
	{
		printf("\nThe stack is empty");
		return -1;
	}
	else
	{
		int a;
		a=s->arr[--s->top];
		return a;
	}
}
		
int main()
{
	struct Stk S;
	S.top=-1;
	int a;
	while(1)
	{
		printf("\nEnter the option");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.peek");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			push(&S);
			break;
			case 2:
			printf("%d",pop(&S));
			break;
			case 3:
			printf("%d",peek(&S));
			break;
		}
	}
	return 0;
}
	

