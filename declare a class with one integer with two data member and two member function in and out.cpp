#include<iostream>
using namespace std;
class integer
{
	private:
	int n;
	public:
	void in()
	{
		cin>>n;
	}
	void out()
	{
		cout<<"the value of  n:"<<n;	
	}
};
int main()
{
	integer d1;
	d1.in();
	d1.out();
	return(0);
}