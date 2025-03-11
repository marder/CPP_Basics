#include <iostream>
using namespace std;

int main()
{

    int numbers[3] = {1, 2, 3};

    *(numbers + 1) = 8;

    *(numbers + 2) = 12;

    cout << "Second Element: " << *(numbers + 1) << endl;

    cout << "Last Element: " << *(numbers + 2) << endl;

    return 0;
}