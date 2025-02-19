#include<iostream.h>
#include<conio.h>

class Student{
	int rno;
	char *sname;
	public :
		Student()
		{
			cout<<"\nEnter Roll no : ";
			cin>>rno;
			cout<<"\nEnter Student Name : ";
			cin>>sname;
		}
		void display()
		{
			cout<<"\nRoll no : "<<rno;
			cout<<"\nStudent Name : "<<sname;
		}
	};
void main()
{
	clrscr();
	Student s1;
	s1.display();
	getch();
}