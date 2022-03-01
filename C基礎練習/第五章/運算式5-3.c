#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a=3,b=5;
    printf("before: a=%d,b=%d\n",a,b);
    a+=b;
    printf("affter: a=%d,b=%d\n",a,b);

    system ("pause");
    return 0;
}

