#include<bits/stdc++.h>
using namespace std;

int main()
{
	int start, end, num ;
	cout << "Enter Table Start = " ;
	cin >> start ;
	cout << "Enter Table End = " ;
	cin >> end ;
	cout << "Print Number of Multipels = ";
	cin >> num ;
	for( int i = start ; i <= end ; i++) {

		for( int j = 1 ; j <= num ; j++ ) {

			cout << i << " X " << j << " = " << i * j <<endl ;
		}
		cout << endl ;
	}

}