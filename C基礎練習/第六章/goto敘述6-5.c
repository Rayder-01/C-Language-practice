#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    // 有loops迴圈效果
    int i=0,sum=0;
    a:
        i++;
        sum+=i;
        printf("%d",i);
        if (i<10)
        {
            printf("+");
            goto a;
        }
    system("pause");
    return 0;
}