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
	printf("��J�Ǹ�:");
	scanf(" %d",&student[i].ID);
	
	printf("��J�m�W:");
	scanf(" %s",&student[i].name);	
	
	printf("��J�ʧO:");
	scanf(" %d",&student[i].sex);
	fflush(stdin);
		
	printf("��J����:");
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
	
	printf("(a)���Z�̧C:%s , ����%.2f \n",student[min_num].name ,student[min_num].score);
	printf("(b)���Z����: %.2f",ave);	
	
	system("pause");
	return 0;
}

