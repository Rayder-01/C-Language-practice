#include <iostream>
#include <cstdlib>

using namespace std;

class myStud
{
	private:
		
		int id;
		char name[100];
		int chin;
		int eng;
		int math;
		
	public:
		myStud (int x1,char y1[])
		{
			id = x1;
			*name = *y1;
	
			cout << "myStud«Øºc¤¸1³Q©I¥s"<<endl;
		}
	
		void setScore(int A, int B, int C)
		{
			chin = A;
			eng = B;
			math = C;
		}
	
		double getAve(void)
		{
			int SUM;
			SUM = chin + eng + math;
			//printf("%.2f",(float)SUM/3);
			return  (float)SUM / 3;
		}
	
		void showData(void)
		{
			cout<<id<<","<<name<<endl;
			printf("%.2f, ",getAve());
			cout<<chin<<","<<eng<<","<<math<<","<<endl;
		}
	
};


int main(void)
{

	myStud A1(301,"John");
	
	A1.setScore(80,60,75);

	A1.showData();
	

	system("pause");
	return 0;
}
