#include <bits/stdc++.h>
using namespace std;

class teacher
{
public:
    // Properties
    string name;

    // Methods
    void deleteName( vector<string> &v, int count)
    {
        for( int i = 0 ; i < count ; i++){
            v.pop_back() ;
        }
    }
    void changeName(string changename)
    {
        
    }
    void printName(vector <string> v)
    {
       for( auto ch : v) cout << ch << endl ;
    }
};

int main()
{
    teacher t1;
    vector <string> v ;
    
    while(true){
    cout << "Teacher DataBase" << endl;
    cout << "1. Add Teacher Name" << endl;
    cout << "2. Delete Teacher Name" << endl;
    cout << "3. Change Teacher Name" << endl;
    cout << "4. Print All Teacher Name" << endl <<endl;


    int choice;
    cout << "Enter Your Choice = ";
    cin >> choice;

    if (choice == 1)
    {
        string name;
        int count ;
        cout << "How Many Names You Want to Add = "  ;
        cin >> count ;
        for(int i = 1 ; i <= count ; i++){
        cout << "Please Enter Teacher Name " << i << " = ";
        cin >> name;
        t1.name = name;
        v.push_back(t1.name) ;
        }
        cout << endl ;
    }
    else if( choice == 2 ){
        int count ;
        cout << "Enter How Many Teacher You want to Delete = " ;
        cin >> count ;
        t1.deleteName(v, count) ;
    }
    else if ( choice == 4 ){
        t1.printName(v) ;
        break ;
    }
    
    }
}