// Q3. Electricity Bill Management.


#include<bits/stdc++.h>
using namespace std ;

int main(){
  
    int customer ;
    cout << "Enter Number of Customer = " ;
    cin >> customer ;
    string name ;
    int unit ;
    int amount ;
    for(int i = 0 ; i < customer ; i++){
        
        cout << "Enter Customer Name = " ; 
        cin >> name ;
        cout << "Enter Consumed Unit = " ;
        cin >> unit ;
        cout << endl ;
        if( unit >=0 && unit <= 100 ) amount = 5 * unit ;
        else if( unit > 100 && unit < 300 ) amount = 7 * unit ;
        else if( unit >= 300 ) amount = 10 * unit ;
        else cout << "Enter Valid Unit" ;
        if( amount > 2000 ){
            amount += (amount*5)/100 ;
        }
        
        cout << "Customer Name = " << name <<endl;
        cout << "Total Consumed Units = " << unit<<endl ;
        cout << "Customer Total Bill = " << amount <<endl<<endl;
    }
    
}