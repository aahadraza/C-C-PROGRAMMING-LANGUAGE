#include<iostream>
#include<conio.h>
class B
{
	//private:
	// int x
	public:
	int y;
	int x;	
};
int main()
{
	B b1;
	b1.x;
	b1.y;
	getch();
	return(0);
}
// the above program access the public data member "y" using the statements "b1.y" where
//"b1" is the object of the class 'B'