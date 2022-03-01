#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b;
    
    printf("put one number in _");
    scanf("%d,%d",&a,&b);        // %c 字元 , %d 十進位 , %f 浮點數
    printf("%d+%d=%d\n",a,b,a+b);

    system("pause");
    return 0;
}