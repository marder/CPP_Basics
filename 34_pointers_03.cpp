#include <iostream>
using namespace std;

int main()
{

    int numbers[6] = {11, 71, 69, 180, 15};

    int largest = *numbers;

    for (int i = 1; i < 6; ++i)
    {
        if (largest < *(numbers + i))
        {
            largest = *(numbers + i);
        }
    }

    cout << "Largest: " << largest << endl;

    return 0;
}