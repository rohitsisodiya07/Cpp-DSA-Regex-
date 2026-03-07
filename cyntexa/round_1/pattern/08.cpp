#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cout << "Enter Number = ";
	cin >> n;
    int temp = 1 ;
	for(int i = 0; i <= n; i++) {

		for(int j = 0; j <= n; j++) {

			if( j >= 0 && j <= i) {
				cout << temp << " ";
		        temp++ ;
			}
		}
		cout << endl;
	}

	return 0;
}