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
			printf("春天 \n");
			break;
		case '2':
			printf("夏天 \n");
			break;
		case '3':
			printf("秋天 \n");
			break;
		case '4':
			printf("冬天 \n");
			break; 
		
		default:
			printf("輸入錯誤 \n");
	}
	
	if ( i<5 )
	goto again;
	
	system("pause");
	return 0;
	
}
