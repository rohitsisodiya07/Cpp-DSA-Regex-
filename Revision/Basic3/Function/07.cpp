// 7. Write a function to calculate the simple interest. (Formula: SI = (P × R × T) / 100)

#include <bits/stdc++.h>
using namespace std;

int calculateSI(int P, int R, int T)
{
    return (P * R * T) / 100;
}

int main()
{

    float P, R, T;

    cout << "Enter Principal: ";
    cin >> P;

    cout << "Enter Rate: ";
    cin >> R;

    cout << "Enter Time: ";
    cin >> T;

    // SI = (P * R * T) / 100;
    cout << "Simple Interest = " << calculateSI(P, R, T);
}