#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char ch;
    while ((ch!=27))    //當按下的鍵不是Ctrl+q時
    {
        ch=getch();
        printf("ASCII of ch=%d\n",ch);
    }
    printf("use q end");
    

    system("pause");
    return 0;
}