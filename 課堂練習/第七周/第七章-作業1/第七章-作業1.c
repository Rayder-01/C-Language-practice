#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//A11023048git 
	int n;
	printf("in put N times : ");

	scanf("%d",&n);

	int i,sum=0,odd=1;
	
	for(i=1;i<=n;i++,odd+=2)
	{
		if(n<=1)
		{
			printf("1+3...+n ( %1 time ) = 1");
			goto start; //start ���� 
		}
		else
			sum=sum+odd;
	}
	
	printf("1+3...+n ( %d time ) = %d",n,sum);
	
	start: //start���� 
		
	system("pause");
	return 0; 
	
 } 
