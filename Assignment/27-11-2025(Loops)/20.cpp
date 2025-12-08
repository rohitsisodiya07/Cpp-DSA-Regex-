#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a, b ;
    cout << "Enter Numbera = " ;
    cin >> a >> b ;
    while(a%b){
        int temp = a % b ;
        a = b ;
        b = temp ;
    }
    cout << "G.C.D = " << b ;
}