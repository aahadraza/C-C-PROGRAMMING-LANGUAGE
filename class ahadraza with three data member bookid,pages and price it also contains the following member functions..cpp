#include<iostream>
using namespace std;
class ahadraza
{
	private:
	int BookID,Pages,price;
	public:
	void get()
	{
		cin>>BookID;
		cin>>Pages;
		cin>>price;
	}
	void show()
	{
		cout<<"the book id is:"<<BookID<<endl;
		cout<<"the pages of book is "<<Pages<<endl;
		cout<<"the price of the book is"<<price<<endl;
	}
	void set(int id,int pg,int pr)
	{
		BookID = id;
		Pages = pg;
		price = pr;
	}
	void getprice()
	{
		cout<<price;
	}
};
int main()
{   
    cout<<"the detail of the book is here:";
	ahadraza d1;
	d1.get();
	d1.getprice();
	
	d1.set(2,345,450);
	d1.show();
	return(0);
}