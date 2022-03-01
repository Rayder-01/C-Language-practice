#include <stdio.h>
#include <stdlib.h>


int sum2(int);
 
int main(void)
{
	
	printf("%d", sum2(2));
	
	system ("pause");
	return 0;
} 
 
int sum2(int n)
{
	if(n==1)
		return 2;
	else
		return sum2(n-1)+2*n;
}
