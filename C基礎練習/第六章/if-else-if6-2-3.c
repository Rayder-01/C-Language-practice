#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num;
    printf("input a number:");
    scanf("%d",&num);

    if(num>=80)
        printf("grade=A");

    else if(num>=70)
        printf("grade=B");
        
        else if(num>=60)
            printf("grade=C");

            else 
                printf("failed!!");


    system("pause");
    return 0;
}