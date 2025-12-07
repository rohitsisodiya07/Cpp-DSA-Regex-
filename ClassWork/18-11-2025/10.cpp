#include<bits/stdc++.h>
using namespace std;

int main()
{
	 string str ;
    int caseno;
    cout << "Enter Your String = " ;
    cin >> str ;
    int len = str.length();
    if( len <= 3 && len >=1 ) caseno = 1 ;
    else if( len > 3 && len <= 5) caseno = 2 ;
    else if( len >=6 && len <=15 ) caseno = 3;
    else caseno = 4 ;
    
    switch(caseno){
        
        case 1 :
            cout << "-1";
            break;
        case 2 :
            cout << str[3];
            break;
        case 3 :
            if( len <= 10){
                for(int i = 6 ; i < len ; i++){
                    cout << str[i] << " " ;
                }
            }
            else{
                for(int i = 6 ; i <= 10 ; i++){
                    cout << str[i] << " " ;
                }
            }
            break;
        case 4 :
            cout << str ;
            break;
        default:
            cout << "Enter Valid Input!!!!" ;
    }

}