#include<bits/stdc++.h>
using namespace std;

void checkEligibility(int age){
    if(age >= 18) cout << "Eligible";
    else cout <<"Not Eligible" ;
}

int main()
{
	int age;
	cout <<"Enter Your Age = " ;
	cin >> age ;
	checkEligibility(age);
}