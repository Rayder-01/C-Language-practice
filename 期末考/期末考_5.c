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
	
	printf("��J�Z�W�ǥͤH�� : ");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		current = (NODE *)malloc(sizeof(NODE));
		printf("��J �ǥ�'�m�W' ��� %d ��C���c: ",i+1);
		scanf(" %s",&(current->name));
		printf("��J �ǥ�'�ʧO' ��� %d ��C���c: ",i+1);
		scanf(" %c",&(current->sex));
		printf("��J �ǥ�'�~��' ��� %d ��C���c: ",i+1);
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
