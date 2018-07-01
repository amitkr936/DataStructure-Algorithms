#include<stdio.h>
#define MAX 10   
struct Stack{
char arr[MAX];
int top;
};
int main()
{
	char b;
	struct Stack S1;
	struct Stack S2;
	S1.top=-1;
	S2.top=-1;
	while(S1.top<MAX)
	{
		printf("\nEnter the element");
		scanf("%c",&b);
		push(&S1,b);
	}
	while(S1.top>0)
	{
		S1.arr[S1.top--]=S2.arr[++S2.top];
	}
	printf("\nString copied");
		
return 0;
}
void push(struct Stack *str,char a)
{
	str->arr[++str->top]=a;
}
	
