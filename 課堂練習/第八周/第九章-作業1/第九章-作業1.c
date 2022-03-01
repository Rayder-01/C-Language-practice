#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float score[5];
	int i,num,sum,min,max;
	
	score[0]=20.5;
	score[1]=16.2;
	score[2]=6.8;
	score[3]=7.4;
	score[4]=30.6;
	
	for(i=0;i<5;i++)
		sum+=score[i];
		
	printf("sum = %d \n",sum/5);
	
	min=max=score[0];
	
	for(i=0;i<5;i++)
	{
		if(score[i]>max)
			max=score[i];
		if(score[i]<min)
			min=score[i];	
	} 
	
	printf("max = %d \n",max);
	printf("min = %d \n",min);
	
	system("pause");
	return 0;
}  
