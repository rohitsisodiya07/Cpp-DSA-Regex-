// #include <bits/stdc++.h>
// using namespace std;
// int vechiclecount(string type[], int vehicles, string vechiclename)
// {
//         //linear Search model
//     int count = 0;
//         for (int i = 0; i < vehicles; i++)
//    
//     {
//                 if (type[i] == vechiclename)
//        
//         {
//                         count++;
//                    
//         }
//            
//     }
//         return count;
// }
// float revenueModel(string type[], int hours[], int vehicles)
// {
//       int bikecount = 0, carcount = 0, truckcount = 0;
//       //car count 
//   carcount = vechiclecount(type, vehicles, "car");
//       //bike count 
//   bikecount = vechiclecount(type, vehicles, "bike");
//       //truckcount
//   truckcount = vechiclecount(type, vehicles, "truck");
//       
//   int price = (bikecount * 20 + carcount * 50 + truckcount * 100);
//       
//   if (price > 500)
//  
//     {
//               return (price - (price * 10.0) / 100.0);
//          
//     }
//       else  
//     {
//               return price;
//          
//     }
// }
// int main()
// {
//         int vehicles;
//         cout << "Enter the number of vehicles\n";
//         cin >> vehicles;
//          if (vehicles > 10)
//    
//     {
//                 cout << "Full Parking-No more space available";
//                 return 0;
//            
//     }
//         string type[vehicles] = {"car", "truck", "truck", "truck", "bike", "bike", "truck", "truck"};
//         int hours[vechicle] = {1, 4, 2, 3, 2, 2, 1, 2};
//         float cost = revenueModel(type, hours, vehicles);
//         cout << "The price is :" << cost;
// }