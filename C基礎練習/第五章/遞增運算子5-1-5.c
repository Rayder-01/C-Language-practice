#include <stdio.h>
#include <stdlib.h>

// 遞增運算子類似餘 a=a+1
// 用 a++更簡潔
// 但要注意 a++ 與 ++a 有先後不同

int main(void)
{
    int a=3 ,b=3;

    printf("a=%d",a);
    printf(", a++ return %d",a++);
    printf(", a=%d\n",a);

    printf("b=%d",b);
    printf(", ++b return %d", ++b);
    printf(", b=%d\n",b);

    system("pause");
    return 0;
}