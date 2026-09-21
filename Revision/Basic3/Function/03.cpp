// 3. Write a function to calculate the square of a number.

#include <bits/stdc++.h>
using namespace std;

int getSquare(int num)
{
    return num * num;
}
int main()
{

    int num;
    cout << "Enter a Number = ";
    cin >> num;

    cout << getSquare(num);
}