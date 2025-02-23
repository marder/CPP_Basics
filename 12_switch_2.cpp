#include <iostream>
using namespace std;

int main()
{

    int number;
    cout << "Enter a number between 1 to 7: ";
    cin >> number;

    switch (number)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Weekday" << endl;
        break;

    case 6:
    case 7:
        cout << "Weekend" << endl;
        break;

    default:
        cout << "Invalid Number" << endl;
    }

    return 0;
}