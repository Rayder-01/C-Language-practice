#include <iostream>
#include <cstdlib>
#include <cmath>\
 
using namespace std;

class CSphere
{
	public:
		void setLocation(int x,int y,int z)
		{
		
		int x ;
		int y ;
		int z ;
		int radius;
	 	}

		void setRadius(int r)
		{
			if(r>0)
				radius=r;
			else
			{
				radius=0;
				cout<<"��J���~"<<endl;
			}
		}
		double volume(void)
		{
			return  pow((((double)radius*3.14*4)/3),3);  //��y����n�� 4/3�kr3 
		}
		void showCenter(void)
		{
			cout<<"��߮y�� = ";
			cout<<"[x="<<x<<", y="<<y<<z<<", z="<<z<<"]"<<endl;

		}
};
int main(void)
{
	CSphere _sphere;
	
	setLocation(2,2,2);
	setRadius(3);
	cout<<"��y��n�� = "<<_sphere.volume()<<endl;
	showCenter();

	system("pause");
	return 0;
}
