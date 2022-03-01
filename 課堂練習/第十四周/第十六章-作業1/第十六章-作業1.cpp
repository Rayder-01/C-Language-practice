#include <iostream>
#include <cstdlib>

using namespace std;

int Ovloand(int);
float Ovloand(float);

int main(void)
{
	int a=-1;
	float b=-2.2;
	

	cout<<"Ovloand("<<a<<") µ´¹ï­È="<<Ovloand(a)<<endl;

	cout<<"Ovloand("<<b<<") µ´¹ï­È="<<Ovloand(b)<<endl;
	
	system("pause");
	return 0;
}
int Ovloand(int a)
{
	if(a<0)
		return a*(-1);
	else
		return a;
}
float Ovloand(float a)
{
	if(a<0)
		return a*(-1);
	else
		return a;
}
