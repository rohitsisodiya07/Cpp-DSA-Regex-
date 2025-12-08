#include<bits/stdc++.h>
using namespace std;

void salarySlip(string name, int basic, int bonus){
        cout << "Total Salary = " << basic + bonus ;
    }

int main()
{
	int basic, bonus ;
    string name ;
    cout << "Enter Name = " ;
    cin >> name ;
    cout << "Enter your basic and bonus = " ;
    cin >> basic >> bonus ;
    salarySlip(name, basic, bonus) ;
}