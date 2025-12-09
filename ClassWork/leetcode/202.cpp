                            //Happy Number
#include<bits/stdc++.h>
using namespace std ;

int ssd(int num){
        int last, sum = 0 ;
        while(num){
            last = num % 10 ;
            sum = sum + last * last ;
            num /= 10 ;
        }
        return sum ;
    }
    bool happynumber(int num){
        
        while( num > 4){
            
            num = ssd(num) ;
            cout << num << endl ;
        }
        if(num == 1) return 1 ;
        else return 0 ;
    }

int  main(){
        int num ;
        cout << "Enter the Number = " ;
        cin >>  num ;
        bool ans = happynumber(num) ;
        // int ans = ssd(num);
        if(ans) cout << "Happy Number" ;
        else cout << "Not Happy Number" ;
}