#include<bits/stdc++.h>
using namespace std;

void showBill(int quantity, float price){
        cout <<"Your Total Bill = " << quantity * price ;
    }

int main()
{
	int quantity ;
    float price ;
    cout <<"Enter Quantity = " ;
    cin >> quantity ;
    cout << "Enter Price = " ;
    cin >> price ;
    showBill(quantity, price) ;
}