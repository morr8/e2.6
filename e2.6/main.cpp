/*
 •• E2.6
 Write a program that prompts the user for a measurement in meters and then converts it to miles, feet, and inches.
*/

#include <iostream>

using namespace std;

int main()
{
    const float meter_in_miles = 0.000621371; // 1 meter in miles
    const float meter_in_feet = 3.28084; // 1 meter in feet
    const float meter_in_inches = 39.3701; // 1 meter in inches
    
    int num1;
    
    cout << "Enter a measurement in meters: ";
    cin >> num1;
    
    cout << num1 << " meters in miles = " << num1 * meter_in_miles << endl;
    cout << num1 << " meters in feet = " << num1 * meter_in_feet << endl;
    cout << num1 << " meters in inches = " << num1 * meter_in_inches << endl;
    
}
