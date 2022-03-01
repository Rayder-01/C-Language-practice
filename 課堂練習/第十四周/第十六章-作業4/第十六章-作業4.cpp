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
				cout<<"輸入錯誤"<<endl;
			}
		}
		double volume(void)
		{
			return  pow((((double)radius*3.14*4)/3),3);  //圓球的體積為 4/3πr3 
		}
		void showCenter(void)
		{
			cout<<"圓心座標 = ";
			cout<<"[x="<<x<<", y="<<y<<z<<", z="<<z<<"]"<<endl;

		}
};
int main(void)
{
	CSphere _sphere;
	
	setLocation(2,2,2);
	setRadius(3);
	cout<<"圓球體積為 = "<<_sphere.volume()<<endl;
	showCenter();

	system("pause");
	return 0;
}
