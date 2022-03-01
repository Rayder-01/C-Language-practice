#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char date;
	
	printf("請輸入1-3 \n");
	scanf("%c",&date);
	
	switch(date)
	{
		case '1':
			printf("上學期 \n");
			break;		
		case '2':
			printf("下學期 \n");
			break;
		case '3':
			printf("結束 \n");
			break;			
		default:
			printf("輸入錯誤 \n");
	}
	
	system("pause");
	
	return 0;
} 
