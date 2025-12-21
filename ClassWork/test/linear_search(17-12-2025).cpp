#include<bits/stdc++.h>
using namespace std ;

bool linearsearch(char key, string str){
    
    for( int i = 0 ; i < str.length() ; i++){
        
        if( str[i] == key) return true ;
    }
    return false ;
}                                                                                                     

string removeduplicate(string str){
    
    string res = "" ;
    for( auto ch : str){
        
        if(!linearsearch(ch, res)) res += ch ;
    }
    return res ;
}

void convertstring(string str){
    
    string uppercase = "" ;
    for( char ch : str){
        
        if( ch >= 65 && ch <= 90 ) uppercase += ch ;
        else{
            
            uppercase += ch - 32 ;
        }
    }
    cout << "UpperCase = " <<uppercase  << endl;
    cout << "Removed String = " << removeduplicate(uppercase) ;
}

void reversenum(string str){
    
    int num = stoi(str) ;
    int rev = 0 ;
    while(num){
        
        rev = rev*10 + num%10 ;
        num /= 10 ;
    }
    cout << "Reverse of Number = " <<rev <<endl ;
}
void dividestring(string str){
    
    string number = "" ;
    string remain = "" ;
    for( char ch : str){
        
        if( ch >= 48 && ch <= 57)  number += ch ;
        else remain += ch ;
    }
    cout << "Number Removed From String = " <<number <<endl ;
    reversenum(number) ;
    cout << remain<<endl ;
    convertstring(remain) ;
    
}

int main(){
    string str = "123abcABC543def" ;
    dividestring(str) ;
}