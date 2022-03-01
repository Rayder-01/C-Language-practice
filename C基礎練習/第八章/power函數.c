#include <stdio.h>
#include <stdlib.h>

double power(double,int);
int main(void)
{
    double x;
    int n;

    printf("use base number and ^ number: ");
    scanf("%lf,%d",&x,&n);
    printf("%lf ^ %d = %lf\n",x,n,power(x,n));

    system("pause");
    return 0;
}

double power(double base, int n)
{
    int i;
    double pow=1.0;
    for(i=1;i<=n;i++)
        pow=pow*base;
    return pow;
}