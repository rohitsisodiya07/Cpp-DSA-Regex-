#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, cube = 0;
    cout << "Enter Number = " ;
    cin >> num ;
    int temp = num ;
    while(num){
        int digit = num % 10 ;
        cube = digit * digit * digit + cube ;
        num = num / 10 ;
    }
    if( temp == cube) cout << "ArmStrong" ;
    else cout << "Not ArmStrong";
}