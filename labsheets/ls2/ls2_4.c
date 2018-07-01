#include<stdio.h>
#include<ctype.h>
#define MAX 10
struct Stack{
int arr[MAX];
int top;
}S;
int main()
{
	char a;
	char exp[20];
	int i=0;
	int o1,o2; 
	S.top=-1;
	printf("\nEnter the expression");
	scanf("%s",exp);
	while(exp[i]!='\0')
	{
		a=exp[i];
		if(isdigit(a))
		{
			push(a-'0');
		}
		else
		{
			o1=pop();
			o2=pop();
			switch(a)
				{
					case '+':
						push(o1+o2);
						break;
					case '-':
						push(o1-o2);
						break;
					case '*':
						push(o1*o2);
						break;
					case '/':
						push(o1/o2);
						break;
				}
		}
				i++;
	}
	printf("\nThe result is %d",pop());
	
	return 0;
}

void push(int d)
{
	S.arr[++S.top]=d;
}
int pop()
{
	return S.arr[S.top--];
}

			
	    
	
	
		
		
	
	
	
	
	
	
	
	

