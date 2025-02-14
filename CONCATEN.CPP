#include<iostream.h>
#include<conio.h>

class String{
	public:
	char str[50];
	String()
	{
		str[0]= '\0';
	}

void input()
{
	cout<<"\nEnter a String : ";
	cin>>str;
}