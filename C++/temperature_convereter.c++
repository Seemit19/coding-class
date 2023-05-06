/*temperature conversion for both celcius to fahrenheit and fahrenheit to celcius*/


#include <iostream>
using namespace std;

int main() 
{
    float temp, converted_temp;
    int choice;

    cout << "Enter 0 to convert from Celsius to Fahrenheit, or 1 to convert from Fahrenheit to Celsius: ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temp;

    if (choice == 0) 
    {
        // Convert from Celsius to Fahrenheit
        converted_temp = (temp * 9/5) + 32;
        cout << temp << " degrees Celsius is equal to " << converted_temp << " degrees Fahrenheit." << endl;
    } 
    else if (choice == 1) 
    {
        // Convert from Fahrenheit to Celsius
        converted_temp = (temp - 32) * 5/9;
        cout << temp << " degrees Fahrenheit is equal to " << converted_temp << " degrees Celsius." << endl;
    } 
    else
    {
        cout << "Invalid choice entered." << endl;
    }

    return 0;
}
