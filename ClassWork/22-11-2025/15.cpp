#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num ;
      cout << "Enter Number = " ;
      cin >> num ;
      string str = " ";
      
      while(num){
          
          str = to_string(num % 2) + str ;
        // cout << num % 2 ;
          num = num / 2 ;
      }
      cout << str ;
}