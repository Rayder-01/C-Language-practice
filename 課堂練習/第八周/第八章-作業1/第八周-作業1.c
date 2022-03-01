#include <stdio.h>
#include <stdlib.h>
 
int GetMax(int, int, int);
int sum(int, int, int, int);
double average(int, int, int, int);

//A11023048
int main (void)
{
	int a, b, c, d;
	int b1, b2, b3, b4;
	
	printf("GetMax(a,b,c): ");
 	scanf("%d,%d,%d",&a,&b,&c);
 	printf("GetMax(%d,%d,%d): Max=%d \n",a,b,c,GetMax(a,b,c));
 	
	printf("sum(a,b,c,d): ");
 	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
 	printf("sum(%d,%d,%d,%d): sum=%d \n",a,b,c,d,sum(a,b,c,d));
 	
 	printf("average(a,b,c,d): ");
 	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
 	printf("average(%d,%d,%d,%d): average=%1f \n",a,b,c,d,average(a,b,c,d));
 	
 	system("pause");
 	return 0;
}
 
int GetMax(int a, int b, int c)
 {

 	if ((a>=b)&&(a>=c))
 		return a;
 	if ((b>=c)&&(b>=a))
 		return b;
 	if ((c>=b)&&(c>=a))
 		return c;	
}

int sum(int a, int b, int c, int d)
{
	int sum;
	
	sum=a+b+c+d;
	return sum;
}
double average(int b1, int b2, int b3, int b4)
{
	int sum,average;
	sum=b1+b2+b3+b4;
	average=sum/4;
	return average;
}

