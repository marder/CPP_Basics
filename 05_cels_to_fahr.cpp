#include <iostream>
using namespace std;

int main()
{

    double celsius;
    double fahrenheit;

    cout << "Enter a valute of temperature in °C: ";
    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    cout << "Temperature in °F: ";
    cout << fahrenheit << endl;

    return 0;
}