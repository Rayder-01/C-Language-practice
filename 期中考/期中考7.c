#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, n, sum=0;
	
	printf("¿é¤J3+6+9+¡K+(n) : ");
	scanf("%d",&n);
	
	while(i<n)
	{
		i=i+3;
		sum=sum+i;
	}
	
	printf("n = %d¡AÁ`©M = %d",n ,sum);
	
	system("pause");
	return 0;
} 
