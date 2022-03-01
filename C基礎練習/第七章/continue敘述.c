#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i%3==0)
            continue;
        printf("i=%d\n",i);
    }
    printf("contine,i=%d\n",i);
    
    system("pause");
    return 0;
}