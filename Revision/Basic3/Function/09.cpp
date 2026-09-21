// 9. Write a function to calculate the area of a circle. (Formula: Area = π × r × r)

#include <bits/stdc++.h>
using namespace std;

float findArea(int num)
{
    return (3.14 * num * num);
}

int main()
{
    float num;
    cout << "Enter Radius = ";
    cin >> num;

    cout << findArea(num);
}