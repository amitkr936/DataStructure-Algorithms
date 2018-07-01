#include<stdio.h>
#define MAX 10
struct Stk
{
	int arr[MAX];
	int front;
	int rear;
};
void enqueue(struct Stk *s)
{
	if(s->rear==MAX-1 && s->front==0)
	{
		printf("\nThe queue is full");
	}
	else
	{	
		int a;
		printf("\nEnter the number");
		scanf("%d",&a);
		s->arr[++s->rear]=a;
		printf("\ninserted");
		if(s->front==-1)
		{
			++s->front;
		}
	}
}
int dequeue(struct Stk *s)
{
	if(s->front==s->rear)
	{
		printf("\nThe queue is empty");
		return -1;
	}
	else
	{
		
		return s->arr[s->front++];
	}
}	


		
int main()
{
	struct Stk S;
	S.front=S.rear=-1;
	int a;
	while(1)
	{
		printf("\nEnter the option");
		printf("\n1.enqueue");
		printf("\n2.dequeue");
		//printf("\n3.pee");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
			enqueue(&S);
			break;
			case 2:
			printf("%d",dequeue(&S));
			break;
			//case 3:
			//printf("%d",peek(&S));
			//break;
		}
	}
	return 0;
}
	

