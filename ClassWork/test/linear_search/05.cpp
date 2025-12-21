//Count Only Vowels in String.

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
void countvowels(string str){

    string vowels = "aeiouAEIOU" ;
    int count = 0 ;
    for( auto ch : str){

        if(linearsearch(ch, vowels)) count++ ;
    }
    cout << "Total Vowels in String = " <<count ;
}

int main()
{
    string str = "rohitsisodiya" ;
	countvowels(str) ;

}