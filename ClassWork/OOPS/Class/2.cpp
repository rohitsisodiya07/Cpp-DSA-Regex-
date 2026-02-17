#include <bits/stdc++.h>
using namespace std;

class teacher
{
public:

    // Methods
    void addName(vector<string> &v)
    {
        int count;
        cout << "Enter How Many Teachers You Want to Add = ";
        cin >> count;
        for (int i = 0; i < count; i++)
        {

            string name;
            cout << "Enter Teacher Name = " << name;
            cin >> name;
            v.push_back(name);
        }
        cout << endl;
    }
    void deleteName(vector<string> &v)
    {
        int count;
        cout << "Enter How Many Teachers You Want to Delete = ";
        cin >> count;
        if (count > v.size())
        {
            cout << "Please Enter Valid Number";
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                v.pop_back();
            }
        }
        cout << endl;
    }
    void changeName(vector<string> &v)
    {
        int count;
        cout << "How Many Teachers Name You Want to Change = ";
        cin >> count;
        if (count > v.size())
        {
            cout << "Invalid Number" << endl;
            return;
        }

        for (int i = 1; i <= count; i++)
        {

            int index;
            cout << "Enter Teacher Number = ";
            cin >> index;
            if (index < 0 && index > v.size())
            {
                cout << "Invalid Teacher Number!!" << endl;
                return;
            }
            string name;
            cout << "Enter New Name = " << endl;
            cin >> name;

            v[index] = name;
        }
    }
    void printName(vector<string> v)
    {
        cout << endl;
        cout << "TEACHERS DATA : " << endl;
        for (auto ch : v)
            cout << ch << endl;
        cout << endl;
    }
};

int main()
{
    teacher t1;
    vector<string> v;

    while (true)
    {
        cout << "Teacher DataBase" << endl;
        cout << "1. Add Teacher Name" << endl;
        cout << "2. Delete Teacher Name" << endl;
        cout << "3. Change Teacher Name" << endl;
        cout << "4. Print All Teacher Name" << endl;
        cout << "5. Exit" << endl
             << endl;

        int choice;
        cout << "Enter Your Choice = ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            t1.addName(v);
            break;

        case 2:
            t1.deleteName(v);
            break;

        case 3:
            t1.changeName(v);
            break;

        case 4:
            t1.printName(v);
            break;

        case 5:
            cout << "THANKS FOR COMING!!!";
            return 0;

        default:
            cout << "Please Enter Valid Choice!!";
            break;
        }
    }
}