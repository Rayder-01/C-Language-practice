#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n,i=1,fack=1; //設定初值
    do
    {
        printf("input n (n>0):");
        scanf("%d",&n);
    }
    while (n<=0);

    do
    {
        fack*=i++;
    }
    while (i <= n);
    printf("%d!=%d\n",n,fack);
    
    system("pause");
    return 0;
}