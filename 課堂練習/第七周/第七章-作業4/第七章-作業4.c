#include <stdio.h>
#include <stdlib.h>

//A11023048
int main(void)
{
	char oper;
	
	while(oper!='5')
	{ 

	printf("4) �K�� \n");
	printf("4) �L�� \n");
	printf("4) ��� \n");
	printf("4) �V�� \n");
	printf("5) end system \n");
	printf("in put 1~5 : ");
	scanf(" %c",&oper);
	
		switch(oper)
		{
			case '1':
				printf("===�K��=== \n");
				break;
			case '2':
				printf("===�L��=== \n");
				break;
			case '3':
				printf("===���=== \n");
				break;
			case '4':
				printf("===�V��=== \n");
				break; 
		
		}
	
	}
	 
	system("pause");
	return 0;
	
}
