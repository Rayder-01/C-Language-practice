#include <stdio.h>
#include <stdlib.h>

//A11023048
int main(void)
{
	char oper;
	int i;
	
	again:
	i++;
	
	printf("in put 1-4 : ");
	scanf(" %c",&oper);
	
	switch(oper)
	{
		case '1':
			printf("�K�� \n");
			break;
		case '2':
			printf("�L�� \n");
			break;
		case '3':
			printf("��� \n");
			break;
		case '4':
			printf("�V�� \n");
			break; 
		
		default:
			printf("��J���~ \n");
	}
	
	if ( i<5 )
	goto again;
	
	system("pause");
	return 0;
	
}
