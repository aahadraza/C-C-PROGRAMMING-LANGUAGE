#include<iostream>
using namespace std;
class ahadraza
{
	private:
    int a,b;
	public:
		//int a,b;
	void input()
	{
		cin>>a;
		cin>>b;
		cout<<"enter the value of a:"<<a<<endl;
		cout<<"enter the value of b:"<<b<<endl;
	}
	void sum()
	{
		cout<<"the sum of two value is"<<a+b<<endl;
	}
};
int main()
{
	ahadraza d1;
	d1.input();
	d1.sum();
	return(0);
}