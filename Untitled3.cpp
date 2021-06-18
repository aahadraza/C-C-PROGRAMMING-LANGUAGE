#include<iostream>
using namespace std;
class ahadraza
{
	public:
	int x;
	void my_function(int a)
	{
		x=a;
		cout<<"the square of the value of a:"<<(a*a)<<endl;
		cout<<"the cube of the value of b:"<<(a*a*a)<<endl;
	}
};
int main()
{
	ahadraza d1;
	d1.my_function(5);
	d1.x;
	return(0);
}