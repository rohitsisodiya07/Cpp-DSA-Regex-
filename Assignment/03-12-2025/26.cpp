#include<bits/stdc++.h>
using namespace std;

void displayMarks(int math, int sci, int eng) {
cout <<"Math = " << math <<endl ;
cout <<"Science = " << sci <<endl ;
cout <<"English = " << eng <<endl ;
}

int main()
{
	int math, sci, eng;
	cout <<"Enter Your Maths, Science and English Marks =  " ;
	cin >> math >> sci >> eng;
	displayMarks(math, sci, eng);
}