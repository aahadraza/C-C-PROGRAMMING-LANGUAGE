#include<iostream>
//#include<conio.h>
using namespace std;
class r //create a class
{
	private:
	int x;
	public:                          // data member:
	int y;
	int z;
	void ahadraza(int nday, int nmonth ,int nyear) //create a function
	{
		x=nday;
		y=nmonth;
		z=nyear;
	}
	void showdata()
	{
		cout<<"day of birth"<<x<<endl;
		cout<<"month of birth"<<y<<endl;
		cout<<"year of birth"<<z<<endl;
	}
}; //end of class
int main()
{
	r d1; //object creation
	d1.showdata(); //call of function show data:
	d1.ahadraza(21,07,2002);//call of function ahadraza
	return(0);
}