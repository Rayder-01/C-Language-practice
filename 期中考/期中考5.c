#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char date;
	
	printf("�п�J1-3 \n");
	scanf("%c",&date);
	
	switch(date)
	{
		case '1':
			printf("�W�Ǵ� \n");
			break;		
		case '2':
			printf("�U�Ǵ� \n");
			break;
		case '3':
			printf("���� \n");
			break;			
		default:
			printf("��J���~ \n");
	}
	
	system("pause");
	
	return 0;
} 
