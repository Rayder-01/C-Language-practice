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
	printf(" 學號 = %d、性別 = %c、姓名 = %s、入學成績 = %.2f",number, sex, name, score);
	
	system("pause");
	return 0;
} 
