                            //Ugly Number
#include<bits/stdc++.h>
using namespace std ;

bool isugly ( int num){
        
        while( num % 2 == 0 && num > 0){
            num /= 2 ;
        }
        while( num % 3 == 0 && num > 0){
            num /= 3 ;
        }
        while( num % 5 == 0 && num > 0){
            num /= 5 ;
        }
        return( num == 1 ) ? true : false ;
    }

int  main(){
        int num ;
        cout << "Enter Number = " ;
        cin >> num ;
        if(isugly(num)) cout <<"Ugly Number";
        else "Not Ugly Number" ;
}