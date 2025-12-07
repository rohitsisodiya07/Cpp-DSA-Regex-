#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, count = 0;
    cout <<"Enter Number = " ;
    cin >> num ;
    int last = num % 10 ;
    cout << "Last = " << last<<endl ;
    int temp = num ;
    while(num){
        
        count++;
        num = num / 10 ;
    }
    int result = 1 ;
    for( int i = 1 ; i < count ; i++){
        
        result = result * 10 ;
    }
    int first = temp / result ;
    cout << "First = " << first << endl ;
    
    for( int i = 1 ; i <= first ; i++){
        cout << i << " " ;
    }
    cout << endl ;
    do{
        cout << last << " ";
        last--;
        
    }while( last >= 0 );
}