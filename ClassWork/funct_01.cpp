#include<bits/stdc++.h>
using namespace std ;

int main(){
    
    int vehicle ;
    cout << "Enter Number of Vehicle = " ;
    cin >> vehicle ;
    if( vehicle > 10){
        cout << "No More Entry" ;
        return 0 ;
    }
    else if( vehicle < 0){
        cout << "Value Less Than 0" ;
        return 0 ;
    }
    cout << "Menu :" << endl ;
    cout << "1.BIKE" << endl ;
    cout << "2.CAR :" << endl ;
    cout << "3.TRUCK :" << endl ;
    string name ;
    int hours ;
    int biketotal = 0 ;
    int cartotal = 0 ;
    int trucktotal = 0 ;
    for( int i = 1 ; i <= vehicle ; i++){
        
        cout << "Enter "<< i << " Vehicle Name = " ;
        cin >> name ;
        if( name != "bike" || name != "car" || name != "truck"){
            cout << "Invalid Name" ;
            return 0 ;
        }
        cout << "Enter Hours = " ;
        cin >> hours ;
        if( name == "bike") biketotal += hours * 20 ;
        else if( name == "car") cartotal += hours * 50 ;
        if( name == "truck") trucktotal += hours * 100 ;
    }
    
    cout << "Total of Bike = " << biketotal << " Rs"<< endl ;
    cout << "Total of Car = " << cartotal << " Rs" << endl ;
    cout << "Total of Truck = " << trucktotal <<" Rs"<< endl ;
    int total = biketotal + cartotal + trucktotal ;
    cout << "Your Total Amount is  = " << total << endl;
    if( total > 500){
        int disc = (total*10) / 100 ;
        total -= disc ;
    }
    cout << "Your Total Amount After Discount = " << total ;
    
    
}