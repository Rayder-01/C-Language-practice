#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cost[3] = {12,14,16};
	int sell_1[3] = {33,32,56};
	int sell_2[3] = {77,33,68};
	int sell_3[3] = {43,55,43};
	int sell_4[3] = {46,28,56};
	int products[3] = {0};
	int sum[4] = {0};
	int i,t,max = 0;
	
	for(i=0;i<3;i++)
	{
		sum[0] += sell_1[i]*cost[i];
		sum[1] += sell_2[i]*cost[i];
		sum[2] += sell_3[i]*cost[i];
		sum[3] += sell_4[i]*cost[i];
		products[i] = sell_1[i] +sell_2[i]+sell_3[i]+sell_4[i];
		products[i] *= cost[i];
	}
	
	for(i=0;i<4;i++)
	{
		printf("�P���%d : %d �� \n",(i+1) ,sum[i]);
	if(sum[i]>max) 
	{
	 	max = sum[i];
	 	t = i;
	}
	}
	printf("�̦n�~�Z�P��� : �P���%d�B�P���`���B : %d \n",t+1,max);
	for(i=0;i<3;i++)
	{
		printf("���~(%c) : %d��\n", 'A'+i, products[i]);
		if(products[i]>max)
		{
			max = products[i];
			t = i;
		}
	}
	printf("�P���`���B�̦h�����~ : %c ���~ �B�P���`���B :%d\n",'A'+t,max);
	
	system("pause");
	return 0;
 } 

