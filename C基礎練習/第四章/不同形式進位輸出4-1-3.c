#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a=15;

    printf("a=%d\n",a);
    printf("float format print a=%f\n",(float)a);
    printf("index format print a=%e\n",(double)a);

    system("pause");
    return 0;
}