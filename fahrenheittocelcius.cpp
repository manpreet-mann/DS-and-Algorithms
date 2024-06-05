#include <iostream>
using namespace std;
int main()
{
    double celcius, fahrenheit;
    cout << "Enter the temperature in fahrenheit: ";
    cin >> fahrenheit;
    celcius = (fahrenheit - 32) * 5 / 9;
    cout << "The temperature in celcius will be: " << celcius << endl;
}