#include<bits/stdc++.h>
using namespace std;

int main()
{
	int start, end;
    cout << "Enter Number =" ;
    cin >> start >> end ;
    int mid = start + ( end - start )/ 2 ;
    for ( int i = start ; i <= mid ; i++) {
        
        if( i == mid ){
            cout << i ;
            cout << " Mid aa Gya" ;
        }
    }
}