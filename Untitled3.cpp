#include<iostream>
using namespace std;
class ahadraza
{
	public:
	int x;
	int y;
	void my_function()
	{
		cin>>x;
		cin>>y;
		if(x==y)
		cout<<"the square of the value of a:"<<(x*x)<<endl;
		else
		cout<<"the cube of the value of b:"<<(y*y*y)<<endl;
	}
};
int main()
{
	ahadraza d1;
	d1.my_function();
	d1.x;
	d1.y;
	return(0);
}