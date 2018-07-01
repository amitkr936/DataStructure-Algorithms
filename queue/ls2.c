#include<stdio.h>
#define MAX 10
struct Stack
{
	char arr[MAX];
	int top;
};

char pop(struct Stack *);
void push(struct Stack *,char);
int main()
{
	int i=0;
	struct Stack S;
	S.top=-1;
	char exp[MAX];
	char s,a;
	int val=1;
	printf("\nEnter the expression");
	scanf("%s",exp);
	while(exp[i]!='\0')
	{
		s=exp[i];
		if(s=='[')//openning brace
		{
			push(&S,s);
		}
		else
		{//clossing brace
			a=pop(&S);
			
			if(s==']' && a=='[')
			{
				val=1;
				printf("\ncorrect %d",i);
				continue;
				
			}
			else
			{
				val=0;
				printf("\nThe braces are not correctly closed %d",i);
				
			}
			if(a=='e')
			{
				val=0;
				printf("\nclossing braces are more");
				break;
			}
		}
		i++;
	}
	if(S.top!=-1)
	{
		printf("\nThere is excess openning brace");
		val=0;
	}
		
	if(val==1)
	{
		printf("The expression is valid");
	}
	else
	{
		printf("\nThe expression is not valid");
	}
	return 0;
}	
		
void push(struct Stack *St,char symb)
{
	if(St->top==MAX-1)
	{
		printf("\nThe stack is full cannot push");
	}
	else
	{
		St->arr[++St->top]=symb;
	}
}
char pop(struct Stack *St)
{
	if(St->top==-1)
	{
		printf("\nYou cannot pop");
		return 'e';
		
	}
	else
	{
		return St->arr[--St->top];
	}
}
		
	
			
	
	
	

