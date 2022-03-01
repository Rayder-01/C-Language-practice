#include <stdio.h>
#include <stdlib.h>
#define num 15 
void count(int arr[]);
int main(void)
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	
	count(arr);
	
	system("pause");
	return 0;
} 

void count(int arr[])
{
	int a[15], b[15];
	int num4=0, not4=0, i;
	
	for(i=0;i<num;i++)
	{
		if (arr[i]%4==0)
		{
			num4++;
			a[num4-1] = arr[i]; 
		}
		else
		{
			not4++;
			b[not4-1] = arr[i];
		}
	}
	printf("4的倍數 = ");
	for(i=0;i<num4;i++)
		printf(" %d",a[i]);
	printf("\n非4的倍數 = ");
	for(i=0;i<not4;i++)
		printf(" %d",b[i]);
}
