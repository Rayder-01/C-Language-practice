#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int i,num;
	
	struct date
	{
		char name[100];
		int age;
		float score;
	} student[num],*ptr;

	printf("��J�Z�W�ǥͤH�� : ");
	scanf("%d",&num);
	fflush(stdin);	

	ptr = (struct date *) malloc(num*sizeof(struct date));
	
	for(i=0;i<num;i++)
	{
		printf("�ǥͩm�W:");
		gets(student[i].name);
		printf("�ǥͦ~��:");
		scanf(" %d",&student[i].age);
		printf("�ǥͤ���:");
		scanf(" %f",&student[i].score);
		fflush(stdin);
	}

	for(i=0;i<num;i++)
		printf("{ %s,%d,%.2f } \n",student[i].name ,student[i].age ,student[i].score);
		
	free(ptr);
		
	system("pause");
	return 0;
}
