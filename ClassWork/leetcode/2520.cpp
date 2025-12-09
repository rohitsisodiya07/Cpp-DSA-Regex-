                            //Happy Number
#include<bits/stdc++.h>
using namespace std ;

  int countdigit(int num){
           int temp = num, last, count = 0 ;
           while(num){
               last = num % 10 ;
               if( temp % last == 0){
                   count++ ;
               }
               num /= 10 ;
           }
           return count ;
       } 

int  main(){
         int num ;
        cout << "Enter Your Number = " ;
        cin >> num ;
        cout << countdigit(num) ;
}