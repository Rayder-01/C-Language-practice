#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num;
    printf("input a number:");
    scanf("%d",&num);

    if (num%2!=0)
    {
        printf("%dcan't Divide by 2 ",num);
        printf("so %d is odd\n",num);
    }
    else
    {
        printf("%dcan Divide by 2 ",num);
        printf("so %d is even\n",num);
    }
    
    system("pause");
    return 0;
}