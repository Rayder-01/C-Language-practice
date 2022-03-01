#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;

    printf("input a character:");
    scanf(" %c",&ch);
    printf("ch=%c, ASCII coe is %d\n",ch,ch);

    system("pause");
    return 0;
}