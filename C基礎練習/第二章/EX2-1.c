#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int num, num2;
    num=2+1;
    num2=25;

    printf("I have %d cats.\n",num);        // %d 格式碼
    printf("you have %d cats, too\n",num);

    printf("\"%6d%%people's number\"",num2);


    system("pause");
    return 0;
}