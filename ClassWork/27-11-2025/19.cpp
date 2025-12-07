#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, a, b;
    cout << "Enter Range = " ;
    cin >> num ;
    cout << "Enter A and B = ";
    cin >> a >> b;
    for( int i = 1 ; i <= num ; i++){
        
        if( i % a == 0 && i % b == 0) cout << i << endl;
    }
}