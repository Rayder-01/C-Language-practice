#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int number;
	char sex;
	char name[7];
	float score;
		
	printf("input your student number:");
	scanf("%d",&number);
	printf("input your sex( M or F ):");
	scanf("  %c",&sex);
	printf("input your name:");
	scanf("  %s",&name);
	printf("input your score:");
	scanf(" %f",&score);
	printf(" �Ǹ� = %d�B�ʧO = %c�B�m�W = %s�B�J�Ǧ��Z = %.2f",number, sex, name, score);
	
	system("pause");
	return 0;
} 
