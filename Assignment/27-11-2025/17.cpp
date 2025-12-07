#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, min = 9 ;
    cout << "Enter Number = " ;
    cin >> num ;
    do{
        int digit = num % 10 ;
        if( min > digit) min = digit ;
        num = num / 10 ;
    }while(num);
    cout << "Minimum = " <<min ;
}