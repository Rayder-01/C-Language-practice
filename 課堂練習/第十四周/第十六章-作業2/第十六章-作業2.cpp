#include <iostream>
#include <cstdlib>

using namespace std;

int max(int,int,int);
int max(int,int);

int main(void)
{
	int a=3, b=8 ,c=5;
	
	cout << "max(" <<a<< "," <<b<< "," <<c<< ")³Ì¤j­È¬°=" <<max(a,b,c)<<endl;
 
 
 	system("pause");
 	return 0;
}

int max(int a, int b , int c)
{
	int x = a;
	if(x<b)
		x = b;
	if(x<c)
		x = c;
		
	return x;
}
