#include<bits/stdc++.h>
using namespace std;

int main()
{
	 int marks ;
        cout << "Enter Marks = " ;
        cin >> marks ;
        if( marks > 90 && marks <= 100) {
            cout << "Conratulation You have Grade A\n" ;
            string str ;
            cout << "Enter String = " ;
            cin >> str ;
            cout << "Fifth Element of String  = " << str[4];
        }
}