#include <stdio.h>
#include <stdlib.h>


int sum2(int);
 
int main(void)
{

	printf("%d", sum2(3));
	
	system ("pause");
	return 0;
} 
 
int sum2(int n)
{
	int i,sum=0,odd=2;
	
	for(i=1;i<=n;i++,odd+=2)
	{
		sum=sum+odd;
	}
	return sum;
}


