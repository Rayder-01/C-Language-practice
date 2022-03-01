#include <stdio.h>
#include <stdlib.h>

void display(char *, int );
int main(void)
{
	char *ptr = "ProgramDesign";
	int n = 6;
	
	display(ptr,n);
	
   	system("pause");
   	return 0;
}

void display(char *ptr, int n)
{
	ptr = ptr + n;
	printf("ptr = %c, n = %d",*ptr,n);
}


