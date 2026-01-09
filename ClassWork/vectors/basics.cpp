//Vecotr is Dynamic Array provided by the STL( Standard Template Library).
#include<bits/stdc++.h>
using namespace std ;
int main(){
//Ways To Define Vector
// 1.
    // vector <int> v ;
    // v.push_back(10) ;
    // v.push_back(20) ;
    // for( auto ch : v) cout << ch << " " ;
    
    //2.
    // vector <int> v (3) ;
    // v.push_back(15) ;
    // for( auto ch : v) cout << ch << " " ;
    
    // 3.
    // vector <int> v (3, 5) ; // assign same value
    // for( auto ch : v) cout << ch << =][\?] " ;
    
    //4.
    // vector <int> v = {15, 25, 35, 45, 50} ; //Give size of Vector and its value.
    // for( auto ch : v) cout << ch << " " ;
    
    // Methods of Vector :
    vector <int> v = {10, 20, 30, 40, 50} ;
    //1. push_back() // Add Element at Last

    // v.push_back(2) ;
    // v.push_back(4) ;
    // for( auto ch : v) cout << ch << " " ;
    
    //2. pop_back() // Remove Last Element of Vector

    // v.pop_back() ;
    // for( auto ch : v) cout << ch << " " ;
    
    // 3. size() // Size of Vector
    // cout << v.size() ;
    
    //4.erase() // Erase Element From Given Index
    // v.erase(v.begin()+2) ;
    // for( auto ch : v) cout << ch << " " ;
    
    //5. at() // Give Elemnt that Present at Given Index
    // cout << v.at(2) ;
    
    //6. back() // Get Last Element
    // cout << v.back() ;
    
    //7. front() // Get First Element
    // cout << v.front() ;
    
    //8. clear() // Clear Vector[Reset]
    // v.clear() ;
    
    //9. insert() // Insert Elemnt at Middle
    v.insert(v.begin()+2, 55) ; // Position, Element
    for( auto ch : v) cout << ch << " " ;


    



}
