#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Reverse - base(10)
    
    int num, rev = 0, count = 0 ;
    cout << "Enter Number = " ;
    cin >> num ;
    int temp = num ;
    while(temp){
        int last = temp % 10 ;
        if( last == 0 ){
          count++ ; 
          temp = temp /10 ;
        } 
        else break ;
    }
    while(num){
        
        int lastdigit = num % 10 ;
        rev = rev * 10 + lastdigit ;
        num = num / 10 ;
    }
    for( int i = 0 ; i < count ; i++){
        cout << "0" ;
    }
    cout << rev ;
}