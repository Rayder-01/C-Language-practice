#include <stdio.h>
#include <stdlib.h> 
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>

#define NUM 3
 
int main(void)
{
	int f1;
	struct data
	{
		int ID;
		char name[9];
		char sex;
		float score;
	}student = {1, "Marry", 'M', 75.25};
	
	f1 = open("testin.txt",O_CREAT|O_WRONLY|O_BINARY,S_IREAD);
	if((f1=-1))
	{
		write(f1,&student,sizeof(student));
		close(f1);
		printf("okay");	
	} 
	
	system("pause");
	return 0;
}
