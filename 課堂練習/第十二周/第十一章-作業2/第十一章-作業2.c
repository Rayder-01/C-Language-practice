#include <stdio.h>
#include <stdlib.h>

#define num 5

int main(void)
{
	int i,max,sum=0;
	
	struct data
	{
		char name[10];
		int score;
	} student[num] = {{"���@", 90},{"����G", 55},{"�i�T�P", 80},{"�B�|", 35},{"�L��", 92}};


	for(i=0;i<num;i++)
	{
		if(student[max].score<student[i].score)
			max = i;
		sum += student[i].score;
	}
	

	printf("���Z�̰����O : %s %d��\n",student[max].name,student[max].score);

	for(i=0;i<num;i++)
		if(student[i].score<60)
			printf("���ή�ǥ�: %s ����: %d\n",student[i].name,student[i].score);	
			
	printf("�������Z: %.2lf\n",(double)sum/num);
	
	system("pause");
	return 0;
	
} 
