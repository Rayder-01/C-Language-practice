#include <stdio.h>
#include <stdlib.h>

int main(viod)
{
	int a;
	float b;
	
	printf ("in put Km : "); 
	scanf ("%d",&a);

	b = a*0.6;
	
	printf ("%d Km = %.1f Mi",a,b);
	
	system("pause");
	return 0;
 } 
