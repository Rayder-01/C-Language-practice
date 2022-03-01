#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char beep='\a';
    // char beep=7
    printf("%c", beep);
    printf("ASCII of beep=%d/n", beep);
    system("pause");
    return 0;
}