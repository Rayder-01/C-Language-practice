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
	
		printf("��J�m�W: ");
		gets(student[i].name);
		printf("��J�~��: ");
		scanf("%d",&student[i].age); 
		printf("��J���Z: ");
		scanf("%f",&student[i].score);
		fflush(stdin);
	}
	
	for(i=0;i<num;i++)
		printf("%s %d�� %.2f��\n",student[i].name,student[i].age,student[i].score);
	
	
	system("pause");
	return 0;
	
} 
