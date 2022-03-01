#include <stdio.h>
#include <stdlib.h>

#define NUM 5

void maxave(int arr[], int *max, int *maxidx, double *ave)
{

	int i;
	double sum = 0;

	for(i=0;i<NUM;i++)
	{

		if(*(arr+i) > *max)
		{
			*max = *(arr+i);
			*maxidx = i;
		}
	}
	
	for(i=0;i<NUM;i++)
	{
		sum += *(arr+i);
	}				
	*ave = sum/5;
	
	for(i=0;i<NUM;i++)
	{
		printf("arr[%d] = %d \n",i,arr[i]);
	}			
	
} 
