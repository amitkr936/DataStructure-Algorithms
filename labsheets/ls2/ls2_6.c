#include<stdio.h>
#define MAX 10
struct Stack{
	int stack[MAX];
	int top;
}S;
int ar[MAX];

void push(int x)
{
    S.stack[++S.top] = x;
}
int pop()
{
    if(S.top == -1)
        return -1;
    else
        return S.stack[S.top--];
}
int FindMin()
{
	int y,z;
	int s;
	for(y=0;y<MAX;y++)
	{
		for(z=y+1;z<MAX;z++)
		{
			if(ar[y]<ar[z])
			{
				s=ar[y];
			}
			else
			{
				s=ar[z];
			}
		}
	}
	return s;
}
int empty()
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
		

int main()
{
	S.top=-1;
	int a;
	int ar[MAX];
	int i=0;
	while(S.top<9)
	{
		printf("\nEnter the element");
		scanf("%d",&a);
		push(a);
	}
	while(!empty())
	{
		ar[i]=pop();
		i++;
	}
	printf("\nThe smallest element is %d",FindMin()); 
	return 0;
}
	
		
	
	
