#include<iostream>
#include<conio.h>
using namespace std;
class R
{
	private:
	int x; //defines private data member:
	public:
	int y; //define public data member:
//	int x;
	void memberfunction() //data function:
{
	int x;
	int y;
	cin>>x;
	cin>>y;
	cout<<"the sum of two value in memeber function is:"<<(x+y);
}
};
int main()
{
	R b1;
	b1.memberfunction();
	getch();
	return 0;
}