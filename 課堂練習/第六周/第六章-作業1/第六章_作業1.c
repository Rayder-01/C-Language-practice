#include <stdio.h>
#include <stdlib.h>

//A11023048
int main(void)
{
	int score;
	int A=0,B=0,C=0;	
	int i;
	
	again:    //¼ÐÅÒ 
	i++;
	
	printf("put in score :");
	scanf("%d,%d",&score,&score);
	
	if (score>=76)
	 	A++;

	else 
	    if (score>=60)
		   	B++;
		else
		   	C++;

	printf(" A=%d \n B=%d \n C=%d \n",A,B,C);
	
	if (i<10)   //10¦¸ ­«½Æ 
	goto again;
	
	system("pause");
	return 0;
	
}
