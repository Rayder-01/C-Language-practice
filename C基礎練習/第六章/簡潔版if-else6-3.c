#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int num,num2,larger;
    printf("input two num:");
    scanf("%d,%d",&num,&num2);

    // 算式 條件判斷 ? 運算式1 : 運算式2

    num>num2 ? (larger=num) : (larger=num2);
    printf("%d number is big\n",larger);

    system("pause");
    return 0;
}