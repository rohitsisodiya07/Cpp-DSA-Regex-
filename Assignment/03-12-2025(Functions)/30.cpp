#include<bits/stdc++.h>
using namespace std;

void printGrade(int marks){
        if( marks <=100 && marks >= 90) cout << "Grade A+" ;
        else if( marks < 90 && marks >= 80) cout << "Grade A" ;
        else if( marks < 80 && marks >= 70) cout << "Grade B+" ;
        else if( marks < 70 && marks >= 60) cout << "Grade B" ;
        else if( marks >=0 && marks < 60) cout <<"Fail" ;
        else cout <<"Enter Valid Marks" ;
    }

int main()
{
	int marks ;
    cout <<"Enter Your Marks = " ;
    cin >> marks;
    printGrade(marks) ;
}