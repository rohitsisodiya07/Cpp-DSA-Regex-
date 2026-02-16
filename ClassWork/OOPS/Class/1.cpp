#include <bits/stdc++.h>
using namespace std;

class teacher
{
public:
    // Properties
    string name;
    string dept;
    string subj;

    // Methods
    void changedept(string newdept)
    {
        dept = newdept;
    }
    void changename(string newName)
    {
        name = newName;
    }
};

int main()
{

    teacher t1;
    t1.name = "Rohit Sisodiya";
    t1.dept = "MERN";
    t1.subj = "DSA";
    t1.changedept("CIVIL");
    t1.changename("Rohit");
    cout << "Teacher Name = " << t1.name << endl;
    cout << "Teacher Department = " << t1.dept << endl;
    cout << "Teacher Subject = " << t1.subj << endl;
}