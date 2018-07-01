#include<stdio.h>
#define SIZE 3
int arr[SIZE][SIZE];
int main()
{
	int i,j;
	printf("\nEnter the elements");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	ev_ele();
	s_ele();
	s_adia();
	return 0;
}
void ev_ele()
{
	int i,j;
	printf("\nEven elements present are");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			if(arr[i][j]%2==0)
			{
				printf(" %d",arr[i][j]);
			}
		}
	}
}
void s_ele()
{
	int c1=0,c2=0,c3=0;
	int i,j;
	printf("\nSum of elements of each row");
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			if(i==0)
			{
				c1+=arr[i][j];
			}
			if(i==1)
			{
				c2+=arr[i][j];
			}
			if(i==2)
			{
				c3+=arr[i][j];
			}
		}
	}
	printf("\nrow 1 %d",c1);
	printf("\nrow 2 %d",c2);
	printf("\nrow 3 %d",c3);
}
void s_adia()
{
	int c=0,i,j;
	for(i=0;i<SIZE;i++)
	{
		for(j=0;j<SIZE;j++)
		{
			if(i<j)
			{
				c+=arr[i][j];
			}
		}
	}
	printf("\nsum is %d",c);
}
				
				
	
	
	
