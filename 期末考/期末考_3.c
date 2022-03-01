#include <stdio.h>
#include <stdlib.h> 

#define NUM 3
 
int main(void)
{
	
	int i, min_num;
	float min = 0, ave = 0, sum = 0;
	
	struct data
	{
		int ID;
		char name[9];
		char sex;
		float score;
	}student[NUM];

	for(i=0;i<NUM;i++)
	{	
	printf("輸入學號:");
	scanf(" %d",&student[i].ID);
	
	printf("輸入姓名:");
	scanf(" %s",&student[i].name);	
	
	printf("輸入性別:");
	scanf(" %d",&student[i].sex);
	fflush(stdin);
		
	printf("輸入分數:");
	scanf("%f",&student[i].score);
	fflush(stdin);
	}
	
	for(i=0;i<NUM;i++)
	{
		if(min > student[i].score)
		{
			min = student[i].score;
			min_num = i;
		}
		sum += student[i].score;
	}
	ave = sum / NUM;
	
	printf("(a)成績最低:%s , 分數%.2f \n",student[min_num].name ,student[min_num].score);
	printf("(b)成績平均: %.2f",ave);	
	
	system("pause");
	return 0;
}

