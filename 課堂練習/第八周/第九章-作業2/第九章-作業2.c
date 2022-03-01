#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,t,max=0;
	int sum[3]={0};
	
	int cost[5]={12,16,10,14,15};
	int sell_a[5]={33,32,56,45,33};
	int sell_b[5]={73,38,68,45,52};
	int sell_c[5]={43,55,32,67,61};
	
	for(i=0;i<5;i++)
	{
		sum[0] += sell_a[i]*cost[i];
		sum[1] += sell_b[i]*cost[i];
		sum[2] += sell_c[i]*cost[i];
	}

	for(i=0;i<3;i++)
		printf("sell_%d : %d $ \n",i+1,sum[i]);
		
		
	if(sum[i]>max)	
	{
		max = sum[i];
		t=i;
	}
	printf("Sum_Max : sell_%d \n",t+1);
	
	system("pause");
	return 0;
		
} 
