#include <stdio.h>
#include <stdlib.h>

void display(char,int);
int main(void)
{
    int n;
    char ch;
    printf("use text :");
    scanf("%c",&ch);
    printf("how many number");
    scanf("%d",&n);
    display(ch,n);

    system("pause");
    return 0;

}

void display(char ch,int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%c",ch);
    printf("\n");
    return;
}