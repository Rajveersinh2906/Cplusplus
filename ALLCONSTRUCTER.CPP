#include<iostream>
#include<conio.h>

class Rectangle
{
	double length,breadth;
	public :
		Rectangle()
		{
			cout<<"\nDefault Constructer Called\n";
			cout<<"\nEnter Length : ";
			cin>>length;
			cout<<"\nEnter Breadth : ";
			cin>>breadth;
		}
		Rectangle(double l,double b)
		{
			cout<<"\nParameterized constructor called\n";
			length=l;
			breadth=b;
		}
		Rectangle(Rectangle &r)
		{
			cout<<"\nCopy Constructer Called\n";
			length=r.length;
			breadth=r.breadth;
		}
		void volume()
		{
			cout<<"\nVolume : "<<length*breadth;
		}
		~Rectangle()
		{
			cout<<"\nDestructor Called";
		}
};
void main()
{
	clrscr();
	Rectangle r1;
	r1.volume();
	Rectangle r2(5,6);
	r2.volume();
	Rectangle r3(r2);
	r3.volume();
	getch();
}
