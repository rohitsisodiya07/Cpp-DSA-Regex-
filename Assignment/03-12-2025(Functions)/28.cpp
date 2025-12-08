#include<bits/stdc++.h>
using namespace std;

void showSalary(string empName, int salary) {

	cout <<"Employee Name = " <<empName << endl ;
	cout <<"Employee Salary = " <<salary;
}

int main()
{
	string empName;
    cout << "Enter Your Name = " ;
    cin >> empName ;
    int salary;
    cout <<"Enter Your Salary = " ;
    cin >> salary ;
    showSalary(empName, salary);
}