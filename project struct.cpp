#include <iostream>
#include <string>
using namespace std;
struct ATM 
{
	string name = " ";
	int pass = 0;
	double balance = 5000;
};
void input(ATM user[], int i);
void deposit(ATM user[], int i);
void withdraw(ATM user[], int i);
int main()
{
	int i = 0;
	int m = 0;
	ATM user[2];
		cout << "please choose process::\n ";
		
           cout<<"1.Go in:\n";
      
           cout<<"2.exit:\n";
        
        
        
        
		cin >> i;

		if (i ==1)
		{
			input(user, i);
		}
		else if(i==2){
			return 0;

		}
		else
		{
			cout << "error! \n";
		}
		cout << "do you wnt to do any other process ::\n ";
		cout<<"1.yes...\n";
		cout<<"2.no...\n";
		cin >> m;
		if (m == 1 )
		{
			cout << "\n\n______________________\n\n";
			main();
		}
		if (m == 2)
		{
			return 0;
		}
		else
		{
			cout << "error!\n";
		}
	return 0;
}
void input(ATM user[], int i)
{
	int choose = 0;

	cout << "please Enter your name :: ";
	cin >> user[i].name;
	cout << endl;

	cout << "please Enter your passowrd :: ";
	cin >> user[i].pass;
	cout << endl;

	cout << "your account balance = " << user[i].balance << endl;
	if (user[i].pass > 999 && user[i].pass < 99999)
	{
		cout << "<< deposit >> click 1  ,  << withdraw >> click 2  ::  ";
		cin >> choose;
		if (choose == 1)
		{
			deposit(user, i);
		}
		else if (choose == 2)
		{
			withdraw(user, i);
		}
		else
		{
			cout << "error! \n";
		}
	}
	else
	{
		cout << "error wrong password \n";
	}
}
void deposit(ATM user[],int i)
{
	double value = 0;
	cout << "enter value :: ";
	cin >> value;
	cout << endl;
	user[i].balance += value;
	cout << "your account balance = " << user[i].balance << endl;
}
void withdraw(ATM user[],int i)
{
	double value = 0;
	cout << "enter value :: ";
	cin >> value;
	cout << endl;
	user[i].balance -= value;
	cout << "your account balance = " << user[i].balance << endl;
}
// youssef ahmed 22270 