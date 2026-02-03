// Q4. ATM Withdrawal Simulation

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int balance = 10000;
    cout << "Wlcome!!! to ATM" << endl;
    ;
    cout << "1.Withdraw" << endl;
    cout << "2.Deposite" << endl;
    cout << "3.Balance Inquire" << endl;
    ;

    int choice;
    cout << "Select Your Choice = ";
    cin >> choice;

    if (choice == 1)
    {
        int amount;
        cout << "Please Enter Withdraw Amount = ";
        cin >> amount;
        if (amount > balance)
        {
            cout << "Invalid Amount";
            return 0;
        }
        else if (amount >= 5000)
        {
            cout << "Not Withdraw More than 5000";
            return 0;
        }
        balance -= amount;
        cout << "Withdraw Successfull" << endl;
        cout << "Your Rem/;'/\aining Balance = " << balance;
    }
    else if (choice == 2)
    {
        int deposite;
        cout << "Please Enter Deposite Amount = ";
        cin >> deposite;
        balance += deposite;
        cout << "Your Balance = " << balance;
        return 0;
    }
    else if (choice == 3)
    {
        cout << "Your Balance = " << balance;
        return 0;
    }
    else
        cout << "Enter Valid Input";
}