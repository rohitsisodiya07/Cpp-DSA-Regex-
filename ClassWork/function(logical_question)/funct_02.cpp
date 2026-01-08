// Q2. Zomato Food Ordering System.

#include<bits/stdc++.h>
using namespace std ;

int main(){
  
    cout << "Menu :" << endl ;
    cout << "1. PIZZA" << endl ;
    cout << "2. BURGER" << endl ;
    cout << "3. MOMOS" << endl ;
    cout << "4. COFFEE" << endl ;
    int order ;
    cout << "Enter Items Count = " ;
    cin >> order ;
    if( order < 0){
        cout << "Order Less than 0" ;
        return 0 ;
    }
    int pizztotal = 0, burgertotal = 0, momostotal = 0, coffeetotal = 0 ;
    int itemNum ;
    int quantity;
    for(int i = 0 ; i < order ; i++){
        
        cout << "Enter Item Number = " ;
        cin >> itemNum ;
        cout << "Enter Item Quantity = " ;
        cin >> quantity ;
        if( itemNum == 1 ) pizztotal += quantity * 200 ;
        else if( itemNum == 2 ) burgertotal += quantity * 100 ;
        else if( itemNum == 3 ) momostotal += quantity * 80 ;
        else if( itemNum == 4 ) coffeetotal += quantity * 120 ;
        else cout << "Enter Valid Input" ;
    }
    int total = pizztotal + burgertotal + momostotal + coffeetotal ;
    if( pizztotal == 0 && burgertotal == 0 && momostotal == 0 && coffeetotal != 0){
        int discount = (total*20)/100 ;
        total -= discount ;
    }
    if( total < 500 ) total += 50 ;
    cout << "Your Final Bill = " << total ;
    
    
}