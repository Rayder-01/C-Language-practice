#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i=1,sum=0; //comma
    while(sum<=100)
    {
        sum+=i;
        printf("1 -plus- %2d=%2d\n",i,sum);
        i ++;
    }
    printf("total:%d\n",i-1);

    system("pause");
    return 0;
}