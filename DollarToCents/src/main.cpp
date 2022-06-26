/*
    Author: Benjamin Simon
    Description: Pennies to dollars
*/

#include <iostream>

using namespace std;

int main()
{

    int pennies {0};

    do
    {
        cout << "Enter your amount of pennies: ";
        cin >> pennies;
    } while (pennies < 0);

    int dollars = pennies / 100;
    cout << "Dollars: " << dollars << endl;
    pennies -= dollars * 100;

    int quarters = pennies / 25;
    cout << "Quarters: " << quarters << endl;
    pennies -= quarters * 25;    
    
    int dimes = pennies / 10;
    cout << "Dimes: " << dimes << endl;
    pennies -= dimes * 10;

    int nickels = pennies / 5;
    cout << "Nickels: " << nickels << endl;
    pennies -= nickels * 5;

    cout << "Pennies: " << pennies << endl;

    return 0;
}