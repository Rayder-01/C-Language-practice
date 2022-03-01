#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char grade;
    printf("Input grade:");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'a':
    case 'A':
        printf("Excellent!\n");
        break;

    case 'b':
    case 'B':
        printf("Good!\n");
        break;

    case 'c':
    case 'C':
        printf("be study hard \n");
        break;

    default:
        printf("failed\n");
    }
    system("pause");
    return 0;
}