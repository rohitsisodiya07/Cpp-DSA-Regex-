#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
	for( int i = 1 ; i <= 30 ; i++) {

		if( i == 12 ) {
			int j = 100 ;
			while( j >= 50 ) {

				if( j % 7 == 0) {

					cout << j << endl ;
					count++ ;
				}
				j-- ;
			}
			cout << "Multiples of 7 = " << count ;
		}
	}
}