#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, count = 0 ;
    cout << "Enter Number = " ;
    cin >> num ;
    while(num%7==0){
        
        num = num / 7 ;
        count++;
    }
    if(num == 1) {
        cout << "Power of 7" <<endl;
        cout << "Number is " << count << " Power of 7" ;
    }
    else cout <<"Not Power of 7" ;
}