#include<stdio.h>
#include<stdlib.h>

int main()
{
int *ptr,*temp;
int i;

ptr = (int *)malloc(4*sizeof(int));  // Allocating 8 bytes
temp = ptr;  // Storing Current Pointer Value

for(i=0;i < 4;i++)
     {
     printf("Enter the Number %d : ",i);
     scanf("%d",ptr);
     ptr++;          // New Location i.e increment Pointer
     }

ptr = temp;
   for(i=0;i < 4;i++)
   {
   printf("\nNumber(%d) : %d",i,*ptr);
   ptr++;
   }

return 0;
}
