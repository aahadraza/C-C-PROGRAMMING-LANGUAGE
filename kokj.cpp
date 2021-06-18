// write a program implementing a class with the name circle having two function with the names.get radius and cal area:
#include<iostream>
using namespace std;
class circle
{
	public:
	int x;
//	int area;
	void getradius()
	{
		cin>>x;
	}
	void calarea()
	{
		cout<<"the area of the circle:"<<(2*3.14*x*x)<<endl;
	}
};
int main()
{
	circle d1;
	d1.getradius();
	d1.calarea();
	d1.x;
	return(0);
	
}