#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int number;
	int years;
	char name1[3];
	char name2[5];
		
	printf("input your student number:");
	scanf("%d",&number);
	printf("input your years:");
	scanf(" %d",&years);
	printf("input your first name:");
	scanf(" %s",name1);
	printf("input your last name:");
	scanf(" %s",name2);
	printf(" number: %d \n name: %s%s \n years: %d \n",number, name1, name2, years);
	
	system("pause");
	return 0;
} 
