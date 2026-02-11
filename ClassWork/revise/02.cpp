// Recursion.

#include <bits/stdc++.h>
using namespace std;

// void printNum(int n){
//     if ( n > 10 ) return ;
//     cout << n << " " ;
//     printNum(n+1) ;
// }

// void printVector(vector <int> v, int i){
//     if( i == v.size()) return ;
//     cout << v[i] << " ";
//     printVector(v, i+1) ;
// }

// void printVector(vector<int> v, int i)
// {
//     if (i < 0)
//         return;
//     cout << v[i] << " ";
//     printVector(v, i - 1);
// }

// void printVector( vector <int> &v, int i){
//     if( i == v.size() ) return ;
//     v[i] = -1 ;
//     printVector(v, i+1) ;
// }

// void printString(string &str, int i, int j)
// {
//     if (i >= j)
//         return;
//     swap(str[i], str[j]);
//     printString(str, i + 1, j - 1);
// }

// void printVector(vector<int> &v, int i, int j)
// {
//     if (i > j)
//         return;
//     swap(v[i], v[j]);
//     printVector(v, i + 1, j - 1);
// }

// void reverseNum(int &num, int &rev)
// {
//     if (num == 0)
//         return;
//     rev = rev * 10 + num % 10;
//     num = num / 10;
//     reverseNum(num, rev);
// }

// int getSum(int num)
// {
//     if (num == 1)
//         return 1;
//     return getSum(num - 1) + num;
// }

// int getFactorial(int num)
// {
//     if (num < 1)
//         return 1;
//     return getFactorial(num - 1) * num;
// }

// int getlength(int num)
// {
//     if (num == 0)
//         return 0;
//     num /= 10;
//     return getlength(num) + 1;
// }

// void countEven(vector<int> v, int &even, int i)
// {
//     if (i == v.size())
//         return;
//     if (v[i] % 2 == 0)
//         even++;
//     countEven(v, even, i + 1);
// }

// void countOdd(vector<int> v, int &odd, int i)
// {
//     if (i == v.size())
//         return;
//     if (v[i] % 2 != 0)
//         odd++;
//     countOdd(v, odd, i + 1);
// }

// void countEvenOdd(vector<int> v, int &even, int &odd, int i)
// {
//     if (i == v.size())
//         return;
//     if (v[i] % 2 == 0)
//         even++;
//     else odd++ ;
//     countEvenOdd(v, even, odd, i + 1);
// }

int main()
{

    // printNum(1) ;

    // vector <int> v = {1, 2, 3, 4, 5} ;
    // printVector(v, 0) ;

    // vector<int> v = {1, 2, 3, 4, 5};
    // int i = v.size() - 1;
    // printVector(v, i);

    // vector <int> v = {10, 20, 30, 40, 50} ;
    // printVector(v, 0) ;
    // for( auto ch : v) cout << ch << " ";

    // string str = "Rohit";
    // int i = 0;
    // int j = str.length() - 1;
    // printString(str, i, j);
    // cout << str;

    // vector <int> v = {5, 10, 15, 20} ;
    // int i = 0 ;
    // int j = v.size()-1 ;
    // printVector(v, i, j) ;
    // for( auto ch : v) cout << ch << " " ;

    // int num = 2504;
    // int rev = 0;
    // reverseNum(num, rev);
    // cout << rev;

    // int number = 3;
    // cout << getSum(number);

    // int num = 5;
    // cout << getFactorial(num);

    // int n = 0;
    // if (n < 0)
    //     n = -(n);
    // if (n < 9)
    // {
    //     cout << "length = 1";
    //     return 0;
    // }
    // cout << getlength(n);

    // vector<int> v = {10, 15, 20, 25, 30, 35, 40};
    // int even = 0;
    // countEven(v, even, 0);
    // cout << "Even  = "  << even ;

    // vector<int> v = {10, 15, 20, 25, 30, 35, 40};
    // int odd = 0;
    // countOdd(v, odd, 0);
    // cout << "Odd  = " << odd;

    // vector<int> v = {10, 15, 20, 25, 30, 35, 40};
    // int even = 0;
    // int odd = 0;
    // countEvenOdd(v, even, odd, 0);
    // cout << "Even = " << even << endl;
    // cout << "Odd = " << odd;

    
}