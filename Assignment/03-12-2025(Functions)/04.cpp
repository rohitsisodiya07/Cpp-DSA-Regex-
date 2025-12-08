#include<bits/stdc++.h>
using namespace std;

void showMenu(){
    string day = "Morning" ;
    if( day == "Morning"){
        cout << "Ginger tea" << endl << "Coffee" << endl << "Green Tea" ;
    }
    else if( day == "Evening"){
        cout << "Rice" << endl << "Roti" << endl << "Dahi" ;
    }
    else if( day == "Night"){
        cout << "Momos" << endl << "Pav-Bhaji" << endl << "Chole Bhature" ;
    }
    else{
        cout << "Invalid Input" ;
    }
}

int main()
{
	showMenu();
}