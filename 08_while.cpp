#include <iostream>
using namespace std;

int main()
{

    double total = 0;
    double number;

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0)
    {

        total = total + number;

        cout << "Enter a number: ";
        cin >> number;
    }

    cout << "Result: " << total << endl;

    return 0;
}