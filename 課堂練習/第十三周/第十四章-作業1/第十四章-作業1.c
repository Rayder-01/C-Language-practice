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
	
	printf("��J�Z�W�ǥͤH�� : ");
	scanf("%d",&num);



	for(i=0;i<num;i++)
	{
		current = (NODE *)malloc(sizeof(NODE));
		printf("��J �ǥͩm�W ��� %d ��C���c: ",i+1);
		scanf(" %s",&(current->name));
		printf("��J �ǥͦ~�� ��� %d ��C���c: ",i+1);
		scanf(" %d",&(current->age));
		printf("��J �ǥͦ��Z ��� %d ��C���c: ",i+1);
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
