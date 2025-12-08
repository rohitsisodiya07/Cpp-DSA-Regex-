#include<bits/stdc++.h>
using namespace std;

int main()
{	
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, sum, avg;
	cout << "Enter Numbers = " ;
	cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10 ;
	sum = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10 ;
	avg = sum / 10;
	cout << "Average = " << fixed << setprecision(2) << avg << endl;
}