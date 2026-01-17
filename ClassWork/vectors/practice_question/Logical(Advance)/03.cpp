// 3 Check if the array is a palindrome.
#include<bits/stdc++.h>
using namespace std ;

int main(){

    vector <int> v = {1, 2, 3, 4, 3, 2, 1} ;
    int i = 0 ;
    int j = v.size()-1 ;
    while( i < j){

        if( v[i] != v[j] ){
            cout << "Not Pallindrome" ;
            return 0 ;
        }
        i++;
        j--;
    }
    cout << "Pallindrome" ;

}