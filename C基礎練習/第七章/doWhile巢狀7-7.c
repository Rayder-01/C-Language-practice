#include <stdlib.h>
#include <stdio.h>

//for 巢狀迴圈
int main(void)
{
    int a,r;

    while(1)
    {
        do
        {
            printf("input an integer");
            scanf("%d",&a);
        }

        while (a<=0);

    printf("the reverse is");
    while (a!=0)
    {
        r=a%10;
        a/=10;
        printf("%d",r);
    }
    printf("\n\n");
    }

    system("pause");
    return 0;
}