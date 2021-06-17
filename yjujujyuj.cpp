//object creation in class:
#include<iostream>
#include<conio.h>
using namespace std;
class ahad
{
	private:
	int x;
	public:
	int y;
	void ahadraza(int a,int b) //create a function:
	{
		x=a;
		y=b;
		//cin>>x;
		//cin>>y;
	}
	int area()
	{
		cout<<"area of the rectangular:"<<(x*y);
	}
};//end of class
int main()
{
	ahad r1;
	r1.ahadraza(56,67); //call to ahadraza function
	r1.area(); //call to area function
	getch();
	return 0;
}