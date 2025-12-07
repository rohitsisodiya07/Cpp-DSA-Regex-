#include<bits/stdc++.h>
using namespace std;

int main()
{
		//Switch with if-else within it

	char op;
	int num1, num2, c;
	cout << "Enter Number = ";
	cin >> num1;
	cout << "Enter Number2 = ";
	cin >> num2;
	cout << "Enter Operator = ";
	cin >> op;

	switch(op) {

	case '+':
		cout << "Sum = " << num1 + num2 ;
		break;

	case '-':
		 c = num1 - num2;
		if( c < 0)
			cout << "Substract = " << c*(-1) ;
		break;

	case '*':
		cout << "Multiply = " << num1 * num2 ;
		break;

	case '/':

		if( num2 == 0) cout << "Error!!! Division by Zero is Not Allowed ";
		else cout << "Div = " << num1 / num2 ;
		break;

	default:
		cout << "Enter Valid Operator " ;
		break ;
	}
}