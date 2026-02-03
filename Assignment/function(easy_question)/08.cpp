//8. Write a function to print the table of a given number.

#include<bits/stdc++.h>
using namespace std ;

void printTable(int num){
    
    for( int i = 1 ; i <= 10 ; i++){
        
        cout << num << " X  " << i << " = " << num * i  << endl;
    }
    
}

int main(){
    
    int num ;
    cout << "Enter Number = " ;
    cin >> num ;
    printTable(num) ;
}