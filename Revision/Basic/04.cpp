// Write a program to move all zeros to the end of the array.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Optmise Approach
    vector<int> v = {1, 0, 2, 0, 3, 4, 0};

    int j = 0;

    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] != 0)
        {

            swap(v[i], v[j]);
            j++;
        }
    }
    for( auto ch : v){
        cout << ch << " " ;
    }
    // vector<int> v = {1, 0, 2, 0, 3, 4, 0};
    // vector<int> num;
    // int zero = 0;
    // for (auto ch : v)
    // {

    //     if (ch != 0)
    //     {

    //         num.push_back(ch);
    //     }
    //     else
    //     {
    //         zero++;
    //     }
    // }
    // int i = 0;
    // while (i < num.size())
    // {

    //     v[i] = num[i];
    //     i++;
    // }
    // while (zero)
    // {
    //     v[i] = 0;
    //     i++;
    //     zero--;
    // }
    // for (auto ch : v)
    // {
    //     cout << ch << " ";
    // }
}