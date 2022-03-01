#include <stdio.h>
#include <stdlib.h>
struct node
{
	char name[10];
	char sex;
	int age;
	struct node *next;
};
typedef struct node NODE;

int main(void)
{
	int i,num;
	NODE *first,*current,*previous;
	
	printf("輸入班上學生人數 : ");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		current = (NODE *)malloc(sizeof(NODE));
		printf("輸入 學生'姓名' 於第 %d 串列結構: ",i+1);
		scanf(" %s",&(current->name));
		printf("輸入 學生'性別' 於第 %d 串列結構: ",i+1);
		scanf(" %c",&(current->sex));
		printf("輸入 學生'年齡' 於第 %d 串列結構: ",i+1);
		scanf("%d",&(current->age));
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
		printf("{ %s,%c,%d } ",current->name,current->sex,current->age);
		printf("\n");
		current = current->next;
	}
	 
	system("pause");
	return 0;
}
