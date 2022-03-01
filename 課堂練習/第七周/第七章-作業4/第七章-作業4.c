#include <stdio.h>
#include <stdlib.h>

//A11023048
int main(void)
{
	char oper;
	
	while(oper!='5')
	{ 

	printf("4) 春天 \n");
	printf("4) 夏天 \n");
	printf("4) 秋天 \n");
	printf("4) 冬天 \n");
	printf("5) end system \n");
	printf("in put 1~5 : ");
	scanf(" %c",&oper);
	
		switch(oper)
		{
			case '1':
				printf("===春天=== \n");
				break;
			case '2':
				printf("===夏天=== \n");
				break;
			case '3':
				printf("===秋天=== \n");
				break;
			case '4':
				printf("===冬天=== \n");
				break; 
		
		}
	
	}
	 
	system("pause");
	return 0;
	
}
