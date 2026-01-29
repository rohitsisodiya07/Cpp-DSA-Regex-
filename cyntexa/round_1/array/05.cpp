// Linear search.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 4, 25, 32, 10, 21, 30};
    int target = 30 ;
    for( auto ch : v){
        if(ch==target){
            cout << "Element Present" ;
            return 0;
        }
    }
    cout << "Not Present";
}