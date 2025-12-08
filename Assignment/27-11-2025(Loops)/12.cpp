#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, a = 0, b = 1, temp ;
    cout << "Enter Number = " ;
    cin >> num ;
    cout << a << " " << b << " " ;
    for( int i = 2 ; i < num ; i++){
        
        temp = a + b ;
        a = b ;
        b = temp ;
        cout << temp << " " ;
    }
}