#include <stdio.h>
#include <stdlib.h>
struct node
{
	char name[10];
	int age;
	float score;
	struct node *next;
};
typedef struct node NODE;

int main(void)
{
	int i,val,num;
	NODE *first,*current,*previous;
	
	printf("輸入班上學生人數 : ");
	scanf("%d",&num);



	for(i=0;i<num;i++)
	{
		current = (NODE *)malloc(sizeof(NODE));
		printf("輸入 學生姓名 於第 %d 串列結構: ",i+1);
		scanf(" %s",&(current->name));
		printf("輸入 學生年齡 於第 %d 串列結構: ",i+1);
		scanf(" %d",&(current->age));
		printf("輸入 學生成績 於第 %d 串列結構: ",i+1);
		scanf("%f",&(current->score));
		if(i==0)
			first = current;
		else
			previous -> next =current;
		current -> next = NULL;
		previous = current;
	}
	
	current = first;	
	while (current!=NULL)
	{
		printf("{ %s,%d,%.2f } ",current->name,current->age,current->score);
		printf("\n");
		current = current->next;
	}
	 
		
	system("pause");
	return 0;
}
