#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    int num ;
    for( int i = 0 ; i < 5 ; i++){

            cout << "Enter Values = " ;
            cin >> num ;
            q.push(num) ;
    }

    while (!q.empty())
    {

        cout << q.front() << endl;
        q.pop();
    }
}