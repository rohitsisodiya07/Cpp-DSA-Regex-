#include<bits/stdc++.h>
using namespace std;

 void  printArea(int length, int width){
        cout <<"Area of Rectangle = " << length * width ;
    }

int main()
{
	int length, width ;
    cout <<"Enter length and width of rectangle = " ;
    cin >> length >> width ;
     printArea(length, width);
}