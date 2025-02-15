#include<stdio.h>
#include<conio.h>

class student;
{

	int rno;
	char *sname;
	public :
		void getData();
		void putData();
};
void student :: getData();

	{
			cout<<"\nEnter Roll no : ";
			cin>>rno;
			cout<<"\nEnter Student Name : ";
			cin>>sname;
		}

void student :: putData()
{
	cout<<"\nRoll no : "<<rno;
	cout<"\nStudent Name : "<<sname;
}

void main()
{

