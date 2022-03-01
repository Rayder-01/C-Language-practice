#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//A11023048
	int i=1;
	int j=1;

	while(i<10)
	{
		for(j=1;j<10;j++)
			printf(" %d*%d=%2d ",i ,j ,i*j);
			
		printf("\n");
		i++;
	}
		
	system("pause");
	return 0; 
 } 
