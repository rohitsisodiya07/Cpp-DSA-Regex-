//Remove First k Element of Queue.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<int> q;
    int k = 2 ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    if(q.size() < k){
        cout << "K is Greater Than Size" ;
        return 0 ;
    }
    while(k){

            q.pop() ;
            k-- ;
    }
    while(!q.empty()){

            cout << q.front() << " " ;
            q.pop() ;
    }

    
    
}