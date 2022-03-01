#include <stdio.h>
#include <stdlib.h>

//A11023048
int main(void)
{
	float hour;
	float 	ex1=60*75,  ex2=60*75+15*(75*1.25);
			
	int i;
	
	again:    //º–≈“ 
	i++;
	
	printf("put in hour :");
	scanf("%f",&hour);
	
	if (hour<=60)
	 	printf("%.2f\n",hour*75);
	else 
		if (hour<=75)
		printf("%.2f\n",ex1+(hour-60)*(75*1.25));
		
		else
		printf("%.2f\n",ex2+(hour-75)*(75*1.75));

	if (i<3)   //3¶∏ ≠´Ω∆ 
	goto again;
	
	system("pause");
	return 0;
	
}
