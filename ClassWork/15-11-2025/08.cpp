#include<bits/stdc++.h>
using namespace std;

int main()
{
    string fruits;
    cout << "Enter String = ";
    cin >> fruits ;
    int n = fruits.length();
	 //Character Based Loop
    // for(char ch : fruits){
    //     cout << ch << " ";
    // }
    //************************
    // //For-of Loop
    for(char &ch : fruits){
        cout << ch << " ";
    }

}