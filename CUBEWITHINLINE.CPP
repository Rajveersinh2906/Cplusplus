#include<iostream.h>
#include<conio.h>

inline int multiply(int a,int b)
{
	return a * b;
}
inline int cube(int x)
{
	return x*x*x;
}

int main(){
	int num1,num2;

	cout<<"Enter A :";
	cin>>num1;
	cout<<"Enter B :";
	cin>>num2;
	cout<<"Multiplication :"<<multiply(num1, num2);

	cout<<"\nEnter A number to find cube :";
	cin>>num1;
	cout<<"cube :" <<cube(num1);
	getch();
	}