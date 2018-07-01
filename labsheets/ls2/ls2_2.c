#include<stdio.h>
#define MAX 10
void push(char);
char pop();
int v;
struct Stack {
char arr[MAX];
int top;
}S;

int main()
{
	char a;
	int i=0;
	S.top=-1;
    char str[10];
	printf("\nEnter a string");
	scanf("%s",str);
	while(str[i]!='\0')
	{
		
		if(str[i]=='(' || str[i]=='{' || str[i]== '[' )
			{
				push(str[i]);
			}
		else if(str[i]=='}' || str[i]==')' || str[i]==']')
        {
			a=pop();
	
			if((str[i]==')' && a=='(') || (str[i]==']' && a=='[') || (str[i]=='}' && a=='}'))
			{
				v=1;
			}
			else
			{
				v=0;
			}
		}
		
			
	i++;	
	}
	
	if(v==1)
	{
		printf("\n Valid");
	}
    else
	{
		printf("\nNOT VALID");

    }
	
	return 0;
}
void push(char a)
{
	S.arr[++S.top]=a;
}
char pop()
{
	return S.arr[S.top];
}
	

	
	
		
		
	
	
	
