#include <stdio.h>
#include <stdlib.h>

#define NUM 5

void maxave(int arr[], int *max, int *maxidx, double *ave);

int main(void)
{
	int max = 0 , maxidx;

	double ave = 0;
	int arr[] = {40, 55, 70, 68, 86};

	maxave(arr,&max,&maxidx,&ave);

	printf("�}�C�̤������̤j�Ȭ�%d , ���ޭȬ�arr[%d] , �}�C������%.2f\n",max ,maxidx,ave);	
	system("pause");
	return 0;
} 
