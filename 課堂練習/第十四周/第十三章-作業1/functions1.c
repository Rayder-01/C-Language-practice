#include <math.h>
#include <stdio.h>

#define PI 3.1416

void show(double);

void show(double r)
{
	printf("¥b®|¬°%5.2f, " ,r);
}

double area(double r)
{
	show(r);
	return (PI*pow(r,2.0));
}

double peri(double r)
{
	show(r);
	return (r*2*PI);
}
