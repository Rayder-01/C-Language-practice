#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n,i=1,sum=0; //設定初值
    do
    {
        printf("input a number > 0");
        scanf("%d",&n);
    }
    while (n<=0);    //<0時重新
    
    do
        sum+=i++;
    while (i <= n);
    printf("1+2...%d=%d\n",n,sum);
    
    system("pause");
    return 0;
}