#include<bits/stdc++.h>
using namespace std;

void printLine(){
    for( int i = 1 ;  i <= 30 ; i++ ){
        cout << "*" ;
    }
    cout <<endl ;
    int i = 1 ;
    while( i <= 30 ){
        cout << "*";
        i++;
    }
    cout << endl ;
    int j = 1;
    do{
        cout << "*" ;
        j++;
    }while( j <= 30);
}

int main()
{
	printLine();
}