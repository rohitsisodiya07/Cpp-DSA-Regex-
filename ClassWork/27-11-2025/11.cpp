#include<bits/stdc++.h>
using namespace std;

int main()
{
     //Time Complexity (n)
    // int num ;
    // bool flag = true ;
    // cout << "Enter Number = " ;
    // cin >> num ;
    // for( int i = 2 ; i < num ; i++){
    //     if( num % i == 0){
    //         flag = false ;
    //         break ;
    //     }
    // }
    // if(flag) cout << "Prime Number" ;
    // else cout << "Not an Prime Number" ;
    //*****************************************
    //Time Complexity ( n/2)
    // int num ;
    // bool flag = true ;
    // cout << "Enter Number = " ;
    // cin >> num ;
    // for( int i = 2 ; i < num/2 ; i++){
    //     if( num % i == 0){
    //         flag = false ;
    //         break ;
    //     }
    // }
    // if(flag) cout << "Prime Number" ;
    // else cout << "Not an Prime Number" ;
    //*****************************************
    //Time Complexity(sqrt(n))
    int num ;
    bool flag = true ;
    cout << "Enter Number = " ;
    cin >> num ;
    for( int i = 2 ; i*i < num ; i++){
        if( num % i == 0){
            flag = false ;
            break ;
        }
    }
    if(flag) cout << "Prime Number" ;
    else cout << "Not an Prime Number" ;
}