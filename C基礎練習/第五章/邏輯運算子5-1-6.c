#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num;
    printf("input a number:");
    scanf("%d",num);

    if(num>0)
      printf("the number is > 0\n");
    
    if(num<=0)
      printf("the number is <=0\n");
    
    printf("exe end");
    
    system("pause");
    return 0;
}