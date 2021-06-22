#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class result
{
	private:
	int rollno ,marks[3];
	char name[50];
	public:
	void input()
	    {
		cout<<"enter the roll no:";
		cin>>rollno;
		cout<<"enter name:";
		gets(name);
		for(i=0;i<3;i++)
		{
			cout<<"enter marks:"<<i<<endl;
		}
}   
void show()
    {
	cout<<"rollno="<<rollno<<endl;
	cout<<"name is:"<<name<<endl;
	for(int i=0;i<3;i++)
	cout<<"marks"<<marks[i]<<endl;
    }
void total()
    {
	int t=0;
	for(int i=0;t<3;t++)
	t=t+marks[i];
	cout<<t;
    }
void avg
    {
	int t=0;
	for(int i=0;t<3;t++)
	t= t + marks[i];
	cout<<t<<endl;
    }
};
int main()
{
	result d1;
	d1.input();
	d1.show();
	d1.total();
	cout<<"total marks"<<endl;
	cout<<"average marks"<<setw(2)<<endl;
	return(0);
}