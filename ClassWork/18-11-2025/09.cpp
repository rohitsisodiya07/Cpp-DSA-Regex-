#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Switch Within if-else
	int pin, choice ;
	double balance = 50000, amount;

	cout << "Enter Your Pin = ";
	cin >> pin ;

	if( pin == 7274) {

		cout << "Login Successful!!"<<endl;
		cout << "Welcome to A.T.M Services"<<endl;
		cout << "1. Check Balance"<<endl;
		cout << "2.Deposite"<<endl;
		cout << "3.Withdraw Money"<<endl;
		cout << "Enter Your Choice = ";
		cin >> choice;

		switch(choice) {
		case 1:
		
			cout << "Your Account Balance = " << balance ;
			break;

		case 2:
		
			cout << "Enter Amount to Deposite = ";
			cin >> amount;
			balance = balance + amount ;
			cout << "Deposite Successful!! Now Total Balance = " << balance;
			break;
			
		case 3:
		
			cout << "Enter Amount to Withdraw";
			cin >> amount ;
			
			if( amount > balance) cout << "Insufficient Balance";
			else {
				balance = balance - amount ;
				cout << "Withdraw Successfull!! Now Total Balance = " << balance;
				break;
			}
			
		default:
		    cout << "Enter Valid Choice";
		    break;
		}

	}
	else cout << "Invalid Pin!!!!";

}