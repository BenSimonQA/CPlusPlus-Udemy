/*
    Author: Benjamin Simon
    Description: Create a price calculator for a cleaning service
*/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Welcome to Ben's Room Cleaning Service!"<<endl;

    cout<<"\nHow many small rooms would you like cleaned? ";
    int amountSmallRoom {0};
    cin>>amountSmallRoom;

    cout<<"\nHow many large rooms would you like cleaned? ";
    int amountLargeRooms {0};
    cin>>amountLargeRooms;

    cout<<"\nNumber of small rooms: "<<amountSmallRoom<<endl;
    cout<<"Number of large rooms: "<<amountLargeRooms<<endl;

    const double priceSmallRoom {25.0};
    const double priceLargeRoom {35.0};
    cout<<"Price per small room: $"<<priceSmallRoom<<endl;
    cout<<"Price per large room: $"<<priceLargeRoom<<endl;

    double totalCost = (amountSmallRoom*priceSmallRoom)+(amountLargeRooms*priceLargeRoom);
    cout<<"Cost: $"<<totalCost<<endl;
    
    const double salesTax {0.06};
    double taxFromTotal {totalCost*salesTax};
    cout<<"Tax: $"<<taxFromTotal<<endl;

    cout<<"============================================================="<<endl;
    cout<<"Total estimate: $"<<totalCost+taxFromTotal<<endl;

    const int validDays {30};
    cout<<"This estimate is valid for "<<validDays<<" days"<<endl;

    return 0;
}