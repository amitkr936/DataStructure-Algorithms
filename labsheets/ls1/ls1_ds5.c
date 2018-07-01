#include<stdio.h>
#include<string.h>
#define SIZE 10
struct Student
{
	char name[20];
	int r_no;
	char add[20];
}S[SIZE];

int main()
{
	int i;
	printf("\nEnter the name and roll no of 10 students");
	for(i=0;i<1;i++)
	{
		printf("\nEnter the name");
		scanf("%s",S[i].name);
		printf("\nenter the rollno");
		scanf("%d",&S[i].r_no);
		printf("\nEnter the address");
		scanf("%s",S[i].add);
	}
	stud();
	return 0;
}
void stud()
{
	int i,a;
	char e[10];
	printf("\nEnter tthe roll no to be searched");
	scanf("%d",&a);
	for(i=0;i<1;i++)
	{
		if(S[i].r_no==a)
		{
			printf("\nName:%s",S[i].name);
			printf("\nAddress: %s",S[i].add);
			
		}
	}
	printf("\nEnter the rollno u want to edit");
	scanf("%d",&a);
	for(i=0;i<1;i++)
	{
		if(S[i].r_no==a)
		{
			printf("\nEnter the address");
			scanf("%s",e);
			strcpy(S[i].add,e);
			printf("\nNew address is");
			printf("%s",S[i].add);
		}
	}
}
	
		
	
	
