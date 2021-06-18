#include<iostream>
using namespace std;
class USMAN
{
	private:
	int f;
	public:
	int x;
	int y;
	int z;
	void my_function(int a,int b,int c)
	{
		cout<<"the sum of three values:"<<(x+y+z)<<endl;
		cout<<"the product of three values"<<(x*y*z)<<endl;
		cout<<"the division of three values"<<(x/y/z)<<endl;
		cout<<"the average of three number is:"<<(x+y+z/3)<<endl;
	}
};
int main()
{
	USMAN d1;
	d1.my_function();
	d1.x;
	d1.y;
	d1.z;
	return(0);
}
