#include<iostream>
#include<conio.h>
using namespace std;
class Employee
{
	public:
	int employee;
	double salary;
	void data_Employee()
	{
		cout<<"enter the name of employee:";
		cin>>employee;
		cout<<"enter the salary of employee";
		cin>>salary;
	}
	void show_employ_data()
	{
		cout<<employee<<endl;
		cout<<"TOTAL SALARY OF THE EMPLOYEE:"<<salary<<endl;
	}
};
class Manager : public Employee
{	
	private:
		int department;
	public:
	
	void data_manager()
	{
		cout<<"enter your department name:"<<endl;
		cin>>department;
	}
	void show_manager()
	{
		cout<<department<<endl;
	}
};
int main()
{
	Manager m;
//	m.data_Employee();
	m.data_manager();
	m.show_employ_data();
	m.show_manager();
	return(0);
}