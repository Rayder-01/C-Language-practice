#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num;
    printf("input a score:");
    scanf("%d",&num);

    if(num<60)
    {
        if(num>50)
            printf("re-exem");
        else                    
            printf("haha GG");
    }
    else
        printf("grade is OK");

    system("pause");
    return 0;
}