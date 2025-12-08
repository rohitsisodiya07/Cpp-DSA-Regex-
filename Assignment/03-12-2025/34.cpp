#include<bits/stdc++.h>
using namespace std;

void gcd(int a, int b){
        
        int c;
        while(a%b){
            c = a % b ;
            a = b ;
            b = c ;
        }
        cout << "G.C.D = " << b <<endl;
        cout << c;
    }

int main()
{
	int a, b ;
    cout << "Enter Values = " ;
    cin >> a >> b ;
    gcd(a, b);
}