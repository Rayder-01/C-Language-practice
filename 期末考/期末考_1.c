#include <stdio.h>
#include <stdlib.h>

#define NUM 5 

void maxave(int arr[], int *max, int *maxidx, double *ave);

int main(void)
{
	int max = 0 , maxidx;

	double ave = 0;
	int arr[] = {80, 25, 66, 94, 74};

	maxave(arr,&max,&maxidx,&ave);

	printf("陣列裡元素的最大值為%d , 索引值為arr[%d] , 陣列平均值%.2f\n",max ,maxidx,ave);	
	
	system("pause");
	return 0;
} 

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
