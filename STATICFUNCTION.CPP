#include<iostream.h>
#include<conio.h>

class StaticFunction
{
	static int a;
	public:
		void setvalue()
		{
			cout<<"\nEnter A :";
			cin>>a;
		}
		static void show()
		{
			cout<<"\nA :"<<a;
		}
};
int StaticFunction::a;
void main()
{
	clrscr();
	StaticFunction s1;
	s1.setvalue();
	StaticFunction::show();
	getch();
}