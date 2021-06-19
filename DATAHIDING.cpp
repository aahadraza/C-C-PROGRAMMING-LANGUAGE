                                 //ENCAPSULATION:
//x,y,z,k;
#include<iostream>
using namespace std;
class ahmedshab
{
	private:
	int x;
	void my_function1()
	{
		cin>>x;
		cout<<x<<endl;
	}
	public:
	int y;
	int z;
	void my_function2()
	{
		cin>>y;
		cin>>z;
		cout<<y<<endl;
		cout<<z<<endl;
	}
	protected:
		int k;
		void my_function3()
		{
			cin>>k;
			cout<<k<<endl;
		}
	
};
int main()
{
//    ahmedshab d1;
//	d1.my_function1();
//	d1.x;
	ahmedshab d2;
	d2.my_function2();
	d2.y;
	d2.z;
	return(0);
}
