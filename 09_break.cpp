#include <iostream>
using namespace std;

int main()
{

    int total = 0;
    int number;

    while (1)
    {

        cin >> number;

        if (number <= 0)
        {
            break;
        }

        total = total + number;
    }

    cout << "Total: " << total << endl;

    return 0;
}