//Remove All Special Character From String.

#include <bits/stdc++.h>
using namespace std;
bool linearsearch(char key, string str)
{

    for (auto ch : str)
    {

        if (key == ch)
            return true;
    }
    return false;
}
void removespecial(string str){
    
    string special = "~!@#$%^&*()_+{}|[]:;<,>.?/*-" ;
    string res = "" ;
    for( auto ch : str){
        if(!linearsearch( ch, special)) res += ch ;
        
    }
    cout << res ;
}


int main()
{
   	string str = "ro{}[]hit@#$%^siso#$%^&*diya" ;
	removespecial(str) ;

}