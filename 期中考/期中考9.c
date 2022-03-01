#include <stdio.h>
#include <stdlib.h>

int sum5(int);
int main(void)
{
	printf("%d",sum5(5));
	
	system("pause");
	return 0;
} 

int sum5(int n)
{
	if(n>0)
		return sum5(n-1)+5;
		
}


