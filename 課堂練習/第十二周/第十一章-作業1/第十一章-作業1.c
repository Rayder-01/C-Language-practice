#include <stdio.h>
#include <stdlib.h>

#define num 3
int main(void)
{
	int i;
	struct data
	{
		char name[10];
		int age;
		float score;
	} student[num];
	
	for(i=0;i<num;i++)
	{
	
		printf("輸入姓名: ");
		gets(student[i].name);
		printf("輸入年齡: ");
		scanf("%d",&student[i].age); 
		printf("輸入成績: ");
		scanf("%f",&student[i].score);
		fflush(stdin);
	}
	
	for(i=0;i<num;i++)
		printf("%s %d歲 %.2f分\n",student[i].name,student[i].age,student[i].score);
	
	
	system("pause");
	return 0;
	
} 
