#include<iostream.h>
#include<conio.h>

class BankAccount
{
	char *Aname;
	int Ano;
	char *Atype;
	float bal;
	public:
		void getData()
		{
			cout<<"\nEnter A Name :";
			cin>>Aname;
			cout<<"\nEnter Account Number :";
			cin>>Ano;
			cout<<"\nEnter Type Of Account :";
			cin>>Atype;
			cout<<"\nBalance Amount In Account : ";
			cin>>bal;
		}
		void putData()
		{
