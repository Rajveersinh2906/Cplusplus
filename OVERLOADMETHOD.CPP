#include<iostream.h>
#include<conio.h>

class Overloading
{
	public:
		void test()
		{
			cout<<"\nTest with no argument";
		}
		void test(int a)
		{
			cout<<"\nTest with 1 argument";
		}
		void test(int a,int b)
		{
			cout<<"\nTest with 2 argument";
		}
};
void main()
{
	Overloading o1;
	o1.test();
	o1.test(10);
	o1.test(10,20);
	getch();
}