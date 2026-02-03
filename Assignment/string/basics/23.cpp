// 23. Check if two strings have same length


#include <bits/stdc++.h>
using namespace std;

int main()
{
  
            string str1 = "Rohit" ;
            string str2 = "Mohit" ;
            
            int count1 = 0 ;
            int count2 = 0 ;
            for( auto ch : str1) count1++ ;
            for( auto ch : str2) count2++ ;

            if( count1 == count2 )  cout << "Yes They have Same Length" ;
            else cout << "No They Have not Same Length" ;

}