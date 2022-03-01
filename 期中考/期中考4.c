#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int time, T2 = 50*100, T3 = 50*125;
	
	scanf("%d",&time);
	
	if(time<=50)
		printf("%d",time*100);
	if(time>50 && time<=100)
		printf("%d",T2+(time-50)*125);
	if(time>100)
		printf("%d",T2+T3+(time-100)*175);
	
	system("pause");
	return 0;
} 
