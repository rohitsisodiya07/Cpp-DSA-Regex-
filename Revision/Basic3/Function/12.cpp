
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int totalVehicle;
    int bike = 0, car = 0, truck = 0;
    int bikeHour = 0, carHour = 0, truckHour = 0;

    cout << "How Many Vehicles = ";
    cin >> totalVehicle;

    if (totalVehicle > 10 || totalVehicle <= 0)
    {
        cout << "Parking capacity is 10 vehicles!";
        return 0;
    }

    cout << "1. Bike - 20/hr" << endl;
    cout << "2. Car - 50/hr" << endl;
    cout << "3. Truck - 100/hr" << endl;

    int number, hour;

    for (int i = 0; i < totalVehicle; i++)
    {
        cout << "\nSelect Vehicle Number = ";
        cin >> number;

        cout << "Enter Hours = ";
        cin >> hour;

        if (hour <= 0)
        {
            cout << "Invalid hours!" << endl;
            i--;
            continue;
        }

        if (number == 1)
        {
            bike++;
            bikeHour += hour;
        }
        else if (number == 2)
        {
            car++;
            carHour += hour;
        }
        else if (number == 3)
        {
            truck++;
            truckHour += hour;
        }
        else
        {
            cout << "Invalid vehicle number!" << endl;
            i--;
        }
    }

    int bikeCharge = 20 * bikeHour;
    int carCharge = 50 * carHour;
    int truckCharge = 100 * truckHour;

    cout << "\nTotal Bikes = " << bike << endl;
    cout << "Total Cars = " << car << endl;
    cout << "Total Trucks = " << truck << endl;

    cout << "Total Bike Charge = " << bikeCharge << endl;
    cout << "Total Car Charge = " << carCharge << endl;
    cout << "Total Truck Charge = " << truckCharge << endl;

    double totalCharge =
        bikeCharge + carCharge + truckCharge;

    cout << "\nOriginal Parking Charge = "
         << totalCharge << endl;

    if (totalCharge > 500)
    {
        double discount = totalCharge * 10 / 100;
        totalCharge -= discount;

        cout << "10% Discount = " << discount << endl;
    }

    cout << "Final Parking Charge = "
         << totalCharge << endl;

    return 0;
}