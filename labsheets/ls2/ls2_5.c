#include<stdio.h>
struct Stack{
char stack[20];
int top;
}S;
void push(char x)
{
    S.stack[++S.top] = x;
}
 
char pop()
{
    if(S.top == -1)
        return -1;
    else
        return S.stack[S.top--];
}
 
int priority(char x)
{
    if(x == '(' || x==')')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    if(x == '$')
		return 3;
      
}
 
int main()
{
    char exp[20];
    char x;
    int i=0;
S.top=-1;

    printf("Enter the expression :: ");
    scanf("%s",exp);
    while(exp[i] != '\0')
    {
		x=exp[i];
        if(isalnum(x))
            printf("%c",x);
        else if(x == '(')
            push(x);
        else if(x == ')')
        {
            while((x = pop()) != '(')
                printf("%c", x);
        }
        else
        {
            while(priority(S.stack[S.top]) >= priority(x))
                printf("%c",pop());
            push(x);
        }
        i++;
    }
    while(S.top != -1)
    {
        printf("%c",pop());
    }
    return 0;
    
}
