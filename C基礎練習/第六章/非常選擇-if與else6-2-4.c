#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num,num2;
    printf("input two score:");
    scanf("%d,%d",&num,&num2);

    if (num>=0)
    
        if(num<=10)
            printf("number between 0 and 10\n");
    else
        printf("number > 10\n");
    

    if (num2>=0)
    {
        if (num2<=10)
            printf("number between 0 and 10\n");  
    }
    else   //如果上面敘述不成立
        printf("number < 0 \n");

    system("pause");
    return 0;
}