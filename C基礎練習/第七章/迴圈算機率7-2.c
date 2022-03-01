#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i,count=0;

    for(i=1;i<=10000;i++)
        if ((rand()%6+1)==3)
            count++;

    printf("ex10000 time ,exeil number three %d time \n",count);
    printf("Probability %.3f \n",(float)count/10000); 
       
    system("pause");
    return 0;
}