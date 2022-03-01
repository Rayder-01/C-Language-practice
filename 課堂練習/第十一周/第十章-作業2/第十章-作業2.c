#include <stdio.h>
#include <stdlib.h>

#define NUM 5

void arrmaxmin(int, int *, int *, int *, int *);
int main(void)
{
   int arr[5]={20,16,6,7,30};
   int *min=0,*max=0;
   int *maxidx , *minidx;
   
   arrmaxmin(arr, max, maxidx, min, minidx);
   


   system("pause");
   return 0;
}

void arrmaxmin(int arr[], int *max, int *maxidx, int *min, int *minidx)
{
	
	min=max=arr; 
	int i;
	for(i=0;i<5;i++)
   	{
    	if(*arr[i]>*max)  
        	max=(arr+i); 
        	maxidx = i;
        	
      	if(*arr[i]<*min)  
         	min=(arr+i); 
         	minidx = i;
     
   	}	
	printf("陣列裡元素的最大值為%d  索引值為%d\n",*max ,*maxidx);
  	printf("陣列裡元素的最小值為%d  索引值為%d\n",*min ,*minidx);
   
}

