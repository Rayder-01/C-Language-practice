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
	struct data student[MAX]={{"���@", 90},{"����G", 55},{"�i�T�P", 80},{"�B�|", 35},{"�L��", 92}};
	
	printf("���Z�̰��ǥ�: %s\t����: %d\n\n",best(student).name,best(student).math);
	
	failed(student);
	
	printf("\n�������Z=%.2lf\n\n",average(student));
	
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
	
	printf("-----���X��W��-----\n");
	for(i=0;i<MAX;i++)
		if(student[i].math<60)
			printf("�m�W: %-10s����: %d\n",student[i].name,student[i].math);
}

double average(struct data student[])
{
	int i;
	double sum=0;
	
	for(i=0;i<MAX;i++)
		sum+=student[i].math;
	
	return sum/MAX;
}

