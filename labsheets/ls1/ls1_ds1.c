#include<stdio.h>
#define SIZE 10
int main()
{
	int arr[SIZE];
	int i,j,k=0;
	printf("\nEnter the numbers in an array");
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to be searched");
	scanf("%d",&j);
	for(i=0;i<SIZE;i++)
	{
		if(arr[i]==j)
		{
			k=1;
			break;
		}
	}
	if(k==1)
	{
		printf("\nFound");
	}
	else
	{
		printf("\nNot found");
	}
	return 0;
}
			

