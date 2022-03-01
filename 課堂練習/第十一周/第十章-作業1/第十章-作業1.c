#include <stdio.h>
#include <stdlib.h>

void count(int *);
int main(void)
{
 	int arr[6]={8,3,6,-1,5,-4};
	int *ptr=arr;

 	count(ptr);
 
 	system("pause");
    return 0;
}


void count(int *ptr)
{
 	printf("ptr = \n");
 	int i;
 	for(i=0;i<6;i++)
 	{ 
 		if(*ptr %2==0)
 		{
		 	printf("°¸¼Æ:");
 			printf("%d \n",*ptr);
 			ptr++;
 		}
 		else
 		{
  			
		 	printf("©_¼Æ:");		
 			printf("%d \n",*ptr);
 			ptr++;
 		} 
 	} 
}
