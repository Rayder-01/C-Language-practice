#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//A11023048
	int n;
	
	start:
	printf("2+4+6+...(+n) , in put (+n) event number : ");
	
	scanf("%d",&n);
	
	if(n%2==1)
	{
		printf("number error , input again \n");
		goto start;
	}
	
	int i,sum=0;
	while (sum<=n)
	{
		sum+=2;
	}
	printf("2+4+...+%d = %d",n ,sum);
		
	system("pause");
	return 0; 
	
 } 
