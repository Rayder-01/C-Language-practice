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

	printf("輸入班上學生人數 : ");
	scanf("%d",&num);
	fflush(stdin);	

	ptr = (struct date *) malloc(num*sizeof(struct date));
	
	for(i=0;i<num;i++)
	{
		printf("學生姓名:");
		gets(student[i].name);
		printf("學生年齡:");
		scanf(" %d",&student[i].age);
		printf("學生分數:");
		scanf(" %f",&student[i].score);
		fflush(stdin);
	}

	for(i=0;i<num;i++)
		printf("{ %s,%d,%.2f } \n",student[i].name ,student[i].age ,student[i].score);
		
	free(ptr);
		
	system("pause");
	return 0;
}
