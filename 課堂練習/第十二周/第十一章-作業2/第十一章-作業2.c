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
	} student[num] = {{"王一", 90},{"李文二", 55},{"張三星", 80},{"劉四", 35},{"林五", 92}};


	for(i=0;i<num;i++)
	{
		if(student[max].score<student[i].score)
			max = i;
		sum += student[i].score;
	}
	

	printf("成績最高的是 : %s %d分\n",student[max].name,student[max].score);

	for(i=0;i<num;i++)
		if(student[i].score<60)
			printf("不及格學生: %s 分數: %d\n",student[i].name,student[i].score);	
			
	printf("平均成績: %.2lf\n",(double)sum/num);
	
	system("pause");
	return 0;
	
} 
