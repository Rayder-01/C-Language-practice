#include <stdio.h>
#include <stdlib.h>
#define MAX 5

struct data
{
	char name[15];
	int math;
};
struct data best(struct data student[]);
void failed(struct data student[]);
double average(struct data student[]);


int main(void)
{
	int i;
	struct data student[MAX]={{"王一", 90},{"李文二", 55},{"張三星", 80},{"劉四", 35},{"林五", 92}};
	
	printf("成績最高學生: %s\t分數: %d\n\n",best(student).name,best(student).math);
	
	failed(student);
	
	printf("\n平均成績=%.2lf\n\n",average(student));
	
	system("pause");
	return 0;
}

struct data best(struct data student[])
{
	struct data b;
	b=student[0];
	int i;
	
	for(i=0;i<MAX;i++)
		if(b.math<student[i].math)
			b=student[i];
	
	return b;
}

void failed(struct data student[])
{
	int i;
	
	printf("-----不合格名單-----\n");
	for(i=0;i<MAX;i++)
		if(student[i].math<60)
			printf("姓名: %-10s分數: %d\n",student[i].name,student[i].math);
}

double average(struct data student[])
{
	int i;
	double sum=0;
	
	for(i=0;i<MAX;i++)
		sum+=student[i].math;
	
	return sum/MAX;
}

