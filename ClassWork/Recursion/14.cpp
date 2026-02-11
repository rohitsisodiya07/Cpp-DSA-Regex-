// Count Number of Odd and Even Values of Vector.

#include <bits/stdc++.h>
using namespace std;
void countNum(vector<int> v, int &odd, int &even, int i){

        if( i == v.size()) return;
        if(v[i] % 2 == 0 ) even += 1 ;
        else odd += 1 ;

        countNum(v, odd, even, i+1) ;
}

int main()
{

    vector <int> v = {10, 20, 30, 45, 55} ;
    int i = 0 ;
    int even = 0 ;
    int odd = 0 ;
    countNum(v, odd, even, i) ;
    cout << "Even " << even << endl ; 
    cout << "Odd Numbers = " << odd << endl ; 

}
