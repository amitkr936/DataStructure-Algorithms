#include<stdio.h>
#define SIZE 10
int main()
{
	char arr[SIZE];
	int i,c=0;
	printf("\nEnter the char array");
	scanf("%s",arr);
	printf("\nThe special chars are");
	for(i=0;i<SIZE;i++)
	{
		switch (arr[i])
		{
			case 'a':
			printf("\n%c",arr[i]);
			c++;
			break;
			case 'e':
			printf("\n%c",arr[i]);
			c++;
			break;
			case 'i':
			printf("\n%c",arr[i]);
			c++;
			break;
			case 'o':
	        printf("\n%c",arr[i]);
	        c++;
            break;
            case 'u':
            printf("\n%c",arr[i]);
            c++;
            break;
            case 'A':
            printf("\n%c",arr[i]);
            c++;
            break;
            case 'E':
            printf("\n%c",arr[i]);
            c++;
            break;
            case 'I':
            printf("\n%c",arr[i]);
            c++;
            break;
            case 'O':
            printf("\n%c",arr[i]);
            break;
            case 'U':
            printf("\n%c",arr[i]);
            break;
		}
		if(arr[i]>=33 && arr[i]<=47)
		{
			printf("\n%c",arr[i]);
			c++;
		}
	}
	printf("\nTotal no of vowels and special charecters = %d",c);
	return 0;
}
