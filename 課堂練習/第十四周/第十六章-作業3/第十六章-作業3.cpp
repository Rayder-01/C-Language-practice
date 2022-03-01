#include <iostream>
#include <cstdlib>
#include <cmath>
 
using namespace std;

class CSphere
{
	private:
		int x ;
		int y ;
		int z ;
		int radius;
		
	public:
		void setLocation(int a,int b,int c)
		{
			if(a>0&&b>0&&c>0)
			{
				x=a;
				y=b;
				z=c;
			}
			else
			{
				x=0;
				y=0;
				z=0;
				cout<<"��J���~"<<endl;
			}
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
	
	_sphere.setLocation(2,2,2);
	_sphere.setRadius(3);
	cout<<"��y��n�� = "<<_sphere.volume()<<endl;
	_sphere.showCenter();

	system("pause");
	return 0;
}
