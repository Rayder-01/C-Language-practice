#include <stdio.h>
#include <stdlib.h>

double bmi(double,double);

//A11023048
int main(void)
{
	double W=55, H=1.7;
	
	printf("W/(H*H) : W,H          (ex:60,1.7) \n"  );
	//scanf("%f,%f",&W,&H);
	printf("%f",bmi(W,H));
	
	
	system ("pause");
	return 0;
}

double bmi(double W, double H)
{
	double BMI;
	double H2;
	
	H2=H*H;
	BMI=W/H2;
	return BMI;
}
