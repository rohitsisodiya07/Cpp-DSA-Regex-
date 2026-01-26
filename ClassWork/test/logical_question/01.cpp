// Rapido Ride Booking System

#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Welcome!!!!!! RAPIDO" << endl;
    cout << "1.BIKE RIDE" << endl;
    cout << "2.AUTO RIDE" << endl;
    cout << "3.CAB RIDE" << endl;
    cout << "4.DELIVERY" << endl;

    int rides;
    cout << "How Many Rides You Want to Book = ";
    cin >> rides;
    int rideNum;
    int distance;
    int totalDistance = 0;
    int fare = 0;
    int discount = 0;
    for (int i = 0; i < rides; i++)
    {

        cout << "Enter Number of Ride = ";
        cin >> rideNum;
        cout << "Enter Distance = ";
        cin >> distance;
        if (rideNum != 1 && rideNum != 2 && rideNum != 3 && rideNum != 4)
        {
            cout << "Invalid Ride Number";
            continue;
        }
        if (distance <= 0)
        {

            cout << "Please Enter Valid Distance";
            continue;
        }
        if (rideNum == 1)
            fare = 50 * distance;
        else if (rideNum == 2)
            fare = 80 * distance;
        else if (rideNum == 3)
            fare = 120 * distance;
        else if (rideNum == 4)
            fare = 60 * distance;
        else
            cout << "Enter Valid Ride Number!!";

        totalDistance += distance;
    }
    cout << "Bill Before Discount = " << fare << endl;

    if (fare > 500)
    {

        discount = fare*10/100 ;
        cout << "Discount Applied = " << discount << endl;
        fare -= discount;
    }
    else if (fare < 200)
    {
        fare += 30;
        cout << "Discount Applied = " << discount << endl;
    }

    cout << "Final Amount = " << fare << endl;
    cout << "Total Distance = " << totalDistance << endl;
    cout << "THANKS FOR COMING!!!!";
}